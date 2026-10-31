#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int ft_check(char *str, char c, int n)
{
	int i;

	i = n - 1;
	while(i >= 0)
	{
		if(str[i] == c)
		{
			return 1;
		}
		i--;
	}
	return 0;
}

int ft_check2(char *str, char c)
{
        int i;

        i = 0;
        while(str[i] != '\0')
        {
                if(str[i] == c)
                {
                        return 1;
                }
                i++;
        }
        return 0;
}

void ft_union(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s1[i] != '\0')
	{
		if(ft_check(s1, s1[i], i) == 0)
		{
			ft_putchar(s1[i]);
		}
		i++;
	}

	while(s2[j] != '\0')
        {
                if((ft_check(s2, s2[j], j) == 0) && (ft_check2(s1, s2[j]) == 0))
                {
                        ft_putchar(s2[j]);
                }
                j++;
        }
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return 0;
}
