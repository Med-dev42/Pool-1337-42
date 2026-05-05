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

int ft_iterative_power(int nb, int power)
{
	long it;

	if(power < 0)
	{
		return 0;
	}

	if(power == 0)
	{
		return 1;
	}

	it = 1;
	while(power > 0)
	{
		it = it * nb;
		power--;
	}
	return it;
}

int main()
{
	int nb;

	nb = ft_iterative_power(5, 5);
	
	ft_putnbr(nb);
	return 0;
}
