#include<unistd.h>

#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		write(1,"-2147483648",1);
		return ;
	 }

	if(nb < 0)
	{
		write(1,"-",1);
		nb = -nb;
	}

	if(nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int ft_recursive_power(int nb, int power)
{

	int rec;

	if(power == 0)
	{
		if(power == 0)
		{
			return 1;
		}
		else
		{
			return 1;
		}
	}

	if(power < 0)
	{
		return 0;
	}
	rec = nb * ft_recursive_power(nb , power - 1);
	
	return rec;
}

int main()
{
	int nb;

	nb = ft_recursive_power(5, 5);
	
	ft_putnbr(nb);
	ft_putchar('\n');
	return 0;
}
