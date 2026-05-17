#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_rot(char *str)
{
	int i;
	int n;
	char c;

	i = 0;
	while(str[i] != '\0')
	{
		n = 13;
		c = str[i];
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			while(n > 0)
			{
				if(c == 'z' || c == 'Z')
				{
					c = c - 26;
					n++;
				}
				else
				{	
					c = c + 1;
				}
				n--;
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
		ft_rot(argv[1]);
	}

	ft_putchar('\n');
	return 0;
}
