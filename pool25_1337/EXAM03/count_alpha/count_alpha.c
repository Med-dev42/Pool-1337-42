#include<unistd.h>
#include<stdio.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int ft_check(char *str, char c, int n)
{
	int i;

	i = 0;
	while(i < n)
	{
		if(ft_tolower(str[i]) == ft_tolower(c))
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int ft_call(char *str, char c)
{
	int n;
	int i;
	
	i = 0;
	n = 0;
	while(str[i] != '\0')
	{
		if(ft_tolower(str[i]) == ft_tolower(c))
		{
			n++;
		}
		i++;
	}
	return n;
}

void ft_count_alpha(char* str)
{
	char	c;
	int	i;
	int	n;

	i = 0;
	n = 1;
	while(str[i] != '\0')
	{
		if(((str[i] <= 'Z' && str[i] >= 'A') || (str[i] <= 'z' && str[i] >= 'a')) && (ft_check(str, str[i], i) == 1))
		{
			if (n == 0)
                        {
                                printf(", ");
			}
			c = str[i]; 
			if(str[i] <= 'Z' && str[i] >= 'A')
			{
				c = c +	32;
			}
			printf("%d%c",ft_call( str, str[i]), c);
	
			n = 0;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_count_alpha(argv[1]);
	}
	printf("\n");
	return 0;
}
