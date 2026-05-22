#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{ 
		i++;
	}
	return i;
}

char *ft_rev_print (char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	while(i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
	ft_putchar('\n');
	return str;
}
