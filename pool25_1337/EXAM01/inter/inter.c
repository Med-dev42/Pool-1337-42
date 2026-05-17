#include<unistd.h>

int ft_putchar(char c)
{
	write(1,&c,1);
}

int ft_check(char *str,char c,int n)
{
	int i;

	i = 0;
	while(i < n)
	{
		if(str[i] == c)
		{
			return 0;
		}
		i++;
	}
	return 1;
}

void ft_inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while(s1[i] != '\0')
	{
		j = 0;
		while(s2[j] != '\0')
		{
			if(s2[j] == s1[i])
			{
				if(ft_check(s1, s1[i],i) == 1)
				{
					ft_putchar(s1[i]);
				}
				break;
			}
			j++;
		}
		i++;
	}
}

int main(int argc,char **argv)
{
	if(argc == 3)
	{
		ft_inter(argv[1],argv[2]);
	}
	ft_putchar('\n');
	return 0;
}
