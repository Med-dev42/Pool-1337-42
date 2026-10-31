#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_first_word(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0' && str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}

	while(str[i] != '\0' && !(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc,char **argv)
{
	if(argc == 2)
	{
		ft_first_word(argv[1]);
	}
	ft_putchar('\n');
	return 0;
}
