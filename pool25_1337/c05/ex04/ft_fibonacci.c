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

int ft_fibonacci(int index)
{
	int fibn;

	if(index < 0)
	{
		return -1;
	}

	if(index == 0)
	{
		return 0;
	}

	if(index == 1)
	{
		return 1;
	}

	fibn = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);

	return fibn;
}

int main()
{
	int nb;

	nb = ft_fibonacci(14);

	ft_putnbr(nb);
	ft_putchar('\0');
	return 0;
}
