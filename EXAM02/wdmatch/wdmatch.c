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

int ft_check(char *s1, char *s2)
{
	int i;
        int j;
	int len;

	len = ft_strlen(s2) - 1;
        i = 0;
        j = 0;
        while(s1[i] != '\0')
        {
		while(s2[j] != '\0')
		{
			if(s1[i] == s2[j])
			{
				break;
			}

			if(len == j && s1[i] != s2[j])
			{
				return 0;
			}
			j++;
		}
		i++;
        }
	return 1;
}

void ft_wdmatch(char *s1, char *s2)
{
	int i;

	i = 0;
	if(ft_check(s1, s2) == 1)
	{
		while(s1[i] != '\0')
		{
			ft_putchar(s1[i]);
			i++;
		}
	}
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		ft_wdmatch(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return 0;
}
