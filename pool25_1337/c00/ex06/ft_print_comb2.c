#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_numbers(int a, int b)
{
	ft_putchar((a / 10) + '0');
	ft_putchar((a % 10) + '0');
	ft_putchar(' ');
	ft_putchar((b / 10) + '0');
	ft_putchar((b % 10) + '0');
	
	if(!(a == 98))
	{
		write(1,", ",3);
	}
}


void ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while(i <= 98)
	{
		j = i + 1;
		while(j <= 99)
		{
			ft_print_numbers(i,j);
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb2();
	return 0;
}
