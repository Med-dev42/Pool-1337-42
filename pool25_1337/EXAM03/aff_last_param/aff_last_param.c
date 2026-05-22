#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc >= 1)
	{
		while(i < argc)
		{
			if(i == argc - 1)
			{
				ft_putstr(argv[i]);			
			}
			i++;
		}	
	}
	ft_putchar('\n');
	return 0;

}
