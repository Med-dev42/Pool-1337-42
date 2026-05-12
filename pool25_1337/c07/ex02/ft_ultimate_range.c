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
		ft_putchar('-');
		nb = -nb;
	}

	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
	}

	ft_putchar((nb % 10) + '0');
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if(min >= max)
	{
		*range = 0;
		return 0;
	}

	size = max - min;
	*range = malloc(size * sizeof(int));
	if(*range == 0)
	{
		return -1;
	}

	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}

	return size;
}

int	main()
{
	int	min;
	int	max;
	int	size;
	int	i;
	int	*result;

	min  = 10;
	max = 15;
	size = max - min;
	ft_ultimate_range(&result , min, max);
	
	i = 0;
	while(i < size)
	{
		ft_putnbr(result[i]);
		ft_putchar(' ');
		i++;
	}
	
	free(result);
	result =  NULL;
	return 0;
}
