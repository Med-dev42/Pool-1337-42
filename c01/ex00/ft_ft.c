#include<stdio.h>
void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int i;

	i =  33;

	ft_ft(&i);

	printf("after: %d", i);
}
