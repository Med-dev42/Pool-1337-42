#include<unistd.h>

void ft_putchar(char c)
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

int ft_check_s1(char *s1, char c)
{
        int i = 0;
        while (s1[i] != '\0')
        {
                if (s1[i] == c)
                        return (0);
                i++;
        }
        return (1); 
}

void ft_union(char *s1,char *s2)
{
	int i;

	i = 0;
	while(s1[i] != '\0')
	{
		if(ft_check(s1,s1[i],i) == 1)
		{
			ft_putchar(s1[i]);
		}
		i++;
	}

	i = 0;
	while(s2[i] != '\0')
	{
		if(ft_check(s2,s2[i],i) == 1 && ft_check_s1(s1,s2[i]) == 1)
		{
			 ft_putchar(s2[i]);
		}	
		i++;
	}
}

int main(int argc,char **argv)
{
	if(argc == 3)
	{
		ft_union(argv[1],argv[2]);
	}
	ft_putchar('\n');
	return 0;
}
