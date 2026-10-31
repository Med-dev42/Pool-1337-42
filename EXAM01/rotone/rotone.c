#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_alpha(char *str)
{
	int i;
	char c;

	if(str[0] == '\0' || str[0] == ' ')
	{
		return ;
	}

	i = 0;
	while(str[i] != '\0')
	{
		c = str[i];
		if((c >= 'a' && c <= 'z') ||(c >= 'A' && c <= 'Z'))
		{
			if((c == 'z' || c == 'Z'))
			{
				c = c - 25;
			}
			else
			{
				c = c + 1;
			}
		}
		ft_putchar(c);
		i++;
	}
}

int main(int argc,char **argv)
{
	if(argc == 2)
	{
		ft_print_alpha(argv[1]);	
	}

	ft_putchar('\n');
	return 0;
}
