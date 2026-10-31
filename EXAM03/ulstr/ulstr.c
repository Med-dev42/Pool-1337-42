#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_ulstr(char *str)
{
	int i;
	int c;

	i = 0;
	while(str[i] != '\0')
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			c = c - 32;
		}
		else if (c >= 'A' && c <= 'Z')
                {
                        c = c + 32;
                }
		ft_putchar(c);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_ulstr(argv[1]);
	}
	ft_putchar('\n');
	return 0;
}
