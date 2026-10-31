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

int *ft_range(int min, int max)
{
	int *nbr;
	int size;
	int i;

	if(min >= max)
	{
                return NULL;
        }

	size = max - min;
	nbr = malloc(size * sizeof(int));
	if(nbr == NULL)
	{
		return NULL;
	}

	i = 0;
	while(min < max)
	{
		nbr[i] = min;
		min++;
		i++;
	}

	return nbr;
}

int main()
{
	int nbr;
	int dest;
	int *result;
	int i;
	int size;

	nbr = 10;
	dest = 15;
	size = dest - nbr;
	result = ft_range(nbr, dest);

	i = 0;
    while (i < size)
    {
        ft_putnbr(result[i]);
        write(1, " ", 1);
        i++;
    }

	free(result);
	result = NULL;
	return 0;
}
