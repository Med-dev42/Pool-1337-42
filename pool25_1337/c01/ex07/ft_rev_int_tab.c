#include<stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tamp;

	i = 0;
	while(i < size / 2)
	{
		tamp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tamp;
		i++;
	}
}

int main()
{
	int tab[] ={1, 2, 3, 4, 5};
	int size = 5;
	int i = 0;

	ft_rev_int_tab(tab,size);
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
