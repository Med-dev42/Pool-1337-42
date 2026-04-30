#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_comb(void)
{
	int i;
	int j;
	int v;

	i = 0;
	while(i <= 7)
	{
		j = i + 1;
		while(j <= 8)
		{
			v = j + 1;
			while(v <= 9)
			{
				ft_putchar(i + '0');
				ft_putchar(j + '0');
				ft_putchar(v + '0');
				
				if(!(i == 7 && j == 8 && v == 9))
				{
					write(1,", ",3);
				}
				v++;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb();
	return 0;
}
