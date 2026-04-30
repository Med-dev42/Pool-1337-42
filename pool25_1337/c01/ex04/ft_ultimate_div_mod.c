#include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{

	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}

int main()
{
	int v;
	int x;

	v = 14;
	x = 5;

	ft_ultimate_div_mod(&v, &x);
	printf("result:\nv = %d\nx = %d\n",v,x);
}
