#include<unistd.h>

void ft_putchar(char  c)
{
	write(1,&c,1);
}

void ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		write(1,"-2147483648",11);
		return ;
	}

	if(nb < 0)
	{
		write(1,"-",1);
		nb = nb * -1;
	}

	if(nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}	

int ft_atoi(char *str)
{
	int get;
	int res;

	get = 1;
	res = 0;

	while(*str == 32 || (*str <= 13 && *str >= 9))
	{
		str++;
	}

	while(*str == '-' || *str == '+')
	{
		if(*str == '-')
		{
			get *= -1;
		}
		str++;
	}

	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0'); 
		str++;	
	}
	return res *  get;
}

int main()
{
	char bm[] = "   	--++-1337sir";
	int result;

	result = ft_atoi(bm);

	ft_putnbr(result);
	write(1,"\n",1);
	return 0;
}
