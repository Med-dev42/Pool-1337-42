#include<unistd.h>

void ft_putchar(char c)
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
		nb = -nb;
	}

	if(nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

void ft_puterorrs(char *base, int *error)
{
	int i;
	int j;

	if(base[0] == '\0' || base[1] == '\0')
	{
		*error = 1;
	}
	i = 0;
	j = 0;
	while(base[i] != '\0' && error == 0)
	{
		j = i + 1;
		while(base[j] != '\0')
		{
			if(base[j] == base[i])
			{
				*error = 1;
			}

			if(base[j] == '-' || base[j] == '+')
			{
				*error = 1;
			}

			if(base[j] >=  126 || base[j] <= 32)
			{
				*error = 1;
			}
			j++;
		}
		i++;
	}
}

int ft_base_index(char c, char *base)
{
	int i;

	i = 0;
	while(base[i] != '\0')
	{
		if(base[i] == c)
		{
			return i;	
		}
		i++;
	}
	return -1;
}

int ft_atoi_base(char *str, char *base)
{
	int error;
	int get;
	int res;
	int lbase;

	error = 0;
	get = 1;
	lbase = 0;
	res = 0;
	ft_puterorrs(base, &error);
	if(error == 0)
	{
		while(base[lbase])
		{
			lbase++;
		}

		while (*str == ' ' || (*str >= 9 && *str <= 13))
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

		while(ft_base_index(*str ,base) != -1)
		{
			res = (res * lbase) + ft_base_index(*str ,base);
			str++;
		}
	}
	return res * get;
}
	
int main()
{
	char name[] = "Holla";
	int result;

	result = ft_atoi_base(name, "01");

	write(1,"This is result: \n",17);
	ft_putnbr(result);
	write(1,"\n",1);
	write(1,"This is test: \n",14);
	ft_putnbr(ft_atoi_base("   ---++101010", "01"));
	write(1,"\n",1);
}
