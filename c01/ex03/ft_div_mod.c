#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int n1;
	int n2;
	
	ft_div_mod(99, 10, &n1, &n2);
	printf("the result:\nn1: %d\nn2: %d\n",n1,n2);
}
