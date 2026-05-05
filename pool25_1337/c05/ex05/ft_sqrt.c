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

int ft_sort(int nb, int i)
{
	int n;
	if(i * i  > nb)
        {
		return 0;
        }

        if(i * i == nb)
        {
		return i;
        }

	n = ft_sort(nb, i + 1);
	return n;
}

int ft_sqrt(int nb)
{
        int i;
	
        if(nb < 0)
        {
                return 0;
        }

        if(nb == 0)
        {
                return 0;
        }

	if(nb == 1)
	{
		return 1;
	}

	i = 1;
        i = ft_sort(nb,i);
        return i;
}

int main()
{
	int nb;

	nb = ft_sqrt(21);

	ft_putnbr(nb);
	ft_putchar('\n');
	return 0;
}
