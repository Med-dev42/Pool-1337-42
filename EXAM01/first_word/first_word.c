#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_check_string(char *str)
{
	int i;

	i = 0;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}

	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
		if((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        	{
                		return ;
		}
	}
}

int main(int argc,char **argv)
{
	if(argc == 2)
	{
		ft_check_string(argv[1]);
	}
	ft_putchar('\n');
	return 0;
}
