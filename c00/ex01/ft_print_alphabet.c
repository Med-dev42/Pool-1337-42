#include<unistd.h>
//Preprocessor directives - uinx standerd

// return value - function name - parameter :
void ft_putchar(char c)
{
	write(1,&c,1);
}

// return value - function name - parameter :
void ft_print_alphabet(void)
{
	int i;

	i = 'a';
	while	(i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
}

// return value - function name - parameter :
int main()
{
	ft_print_alphabet();
	return 0;
}