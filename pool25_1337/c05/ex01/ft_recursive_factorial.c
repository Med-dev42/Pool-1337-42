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

int ft_recursive_factorial(int nb)
{
	if(nb == 0 || nb == 1)
	{
		return 1;
	}	
	
	if(nb < 0)
	{
		return 0;
	}

	return nb * ft_recursive_factorial(nb - 1);
}

int main()
{
	int n;
       
	n = ft_recursive_factorial(4);

	ft_putnbr(n);
	write(1,"\n",1);
}
