#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int ft_check(char *s1,char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s1[i] != '\0' && s2[j] != '\0')
	{
		if(s1[i] == s2[j])
		{
			i++;
		}
		j++;
	}

	if (s1[i] == '\0')
        	return (1);

	return 0;
}

void ft_wdmatch(char *s1,char *s2)
{
	int i;

	i = 0;
	if(ft_check(s1,s2) == 1)
	{
		while(s1[i] != '\0')
		{
			ft_putchar(s1[i]);
			i++;
		}
	}
}

int main(int argc,char **argv)
{
	if(argc == 3)
	{	
		ft_wdmatch(argv[1], argv[2]);
	}	
	ft_putchar('\n');
	return 0;
}
