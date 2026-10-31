#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putstr(char *str)
{
	int i;

	if(!str)
		return ;
	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_strcmp(char *s1, char *s2)
{
	while(*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}

	return *s1 - *s2;
}

int main(int argc, char **argv)
{
	int i;
	int j;
	char *temp;

	if(argc < 2)
		return 0;

	i = 1;
	while(i < argc - 1)
	{
		j = i + 1;
		while(j < argc)
		{
			if( ft_strcmp(argv[i],argv[j]) && argv[j] > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;		
			}
			j++;
		}
		i++;
	}
	
	i = 1;
	while(i < argc)
	{
		ft_putstr(argv[i]);
		write(1,"\n",1);
		i++;
	}
}
