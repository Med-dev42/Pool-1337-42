#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_rotone(char *str)
{
	int i;
	char c;

	i = 0;
	while(str[i] != '\0')
	{
		c = str[i];
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			if(c == 'z' || c == 'Z')
			{
				c = c - 24;
			}
			c++;
		}
		ft_putchar(c);
		i++;
	}
}

int main(int argc,char **argv)
{
	if(argc == 2)
	{
		ft_rotone(argv[1]);
	}
	ft_putchar('\n');
	return 0;
}
