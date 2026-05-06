#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putnbr(char *str)
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

int  main(int argc, char **argv)
{
	int i;

	i = argc - 1;
	if(argc > 0)
	{
		while(i > 0)
		{
			ft_putnbr(argv[i]);
			write(1,"\n",1);
			i--;
		}
	}
}
