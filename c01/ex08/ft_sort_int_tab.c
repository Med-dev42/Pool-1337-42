#include<stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int v;
	int tamp;

	i = 0;
	while(i < size)
	{
		v = 0;
		while(v < size - 1)
		{
			if(tab[v] > tab[v + 1])
			{
				tamp = tab[v];	
				tab[v] = tab[v + 1];
				tab[v + 1] = tamp;
			}
			v++;
		}
		i++;
	}
}

int main()
{
	int tab[] = {9,2,1,0,2,7,3,1};
	int size = 8;
	int i = 0;

	ft_sort_int_tab(tab, size);
	
	while(i < size)
	{
		printf("%d",tab[i]);
		i++;
	}
	printf("\n");
	return 0;
}
