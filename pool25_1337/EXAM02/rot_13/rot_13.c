#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_rot_13(char *str)
{
	char c;
	int s;
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		s = 13;
		while (s > 0 && ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		{
			if (c == 'z' || c == 'Z')
			{
				c = c - 26;
			}
			c++;
			s--;
		}
		ft_putchar(c);
		i++;
	}
}

int main(int argc,char **argv)
{
	if(argc == 2)
	{
		ft_rot_13(argv[1]);
	}
	ft_putchar('\n');
	return 0;
}
