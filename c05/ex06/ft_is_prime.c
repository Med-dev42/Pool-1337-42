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

int ft_is_prime(int nb)
{
	int i;
	if(nb <= 1)
	{
		return 0;
	}

	i = 2;
	while(i < nb )
	{
		if(nb % i == 0)
		{
			return 0;
		}

		i++;
	}
	return 1;
}

int main()
{
	int nb;

	nb = ft_is_prime(6);

	ft_putnbr(nb);
	ft_putchar('\n');
	return nb;
}
