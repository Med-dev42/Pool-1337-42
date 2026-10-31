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

int ft_is_prime(int nb)
{
	 int i;

        if(nb <= 1)
        {
                return 1;
        }

        i = 2;
        while(i < nb)
        {
                if(nb % i == 0)
                {
			return 0;
                }
                i++;
        }
        return 1;
}

int ft_find_next_prime(int nb)
{
	if(nb <= 2)
        {
                return 2;
        }
	
	while(1)
	{
		if(ft_is_prime(nb) == 1)
		{
			return nb;
		}
		nb++;
	}
}

int main()
{
	int n;

	n = ft_find_next_prime(2147483647);

	ft_putnbr(n);
	ft_putchar('\n');
	return 0;
}
