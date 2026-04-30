#include<unistd.h>

// skip the project in piscine :

void ft_putchar(char c)
{
	write(1,&c,1);
}

void print_number(int *tab, int n)
{
	int i;

	i = 0;
	while(i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}

	if(tab[0] < 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}


}

void value(int n, int index, int start, int *tab)
{
	int i;

	if(index == n)
	{
		print_number(tab,n);
		return ;
	}

	i = start;
	while(i <= 9)
	{
		tab[index] = i;

		value(n,index + 1,i + 1,tab);
		i++;
	}

}

void ft_print_combn(int n)
{
	int tab[10];

	if(n > 0 && n < 10)
		value(n, 0, 0, tab);
}

int main()
{
	ft_print_combn(9);
	return 0;
}
