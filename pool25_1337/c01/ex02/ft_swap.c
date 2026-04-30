#include<stdio.h>

void ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;	
}

int main()
{
	int n1;
	int n2;

	n1 = 13;
	n2 = 23;

	printf("BEFOR :\n n1: %d\n n2: %d \n",n1,n2);
	ft_swap(&n1, &n2);
	printf("AFTER :\n n1: %d\n n2: %d \n",n1,n2);
}
