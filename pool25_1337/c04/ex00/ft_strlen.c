#include<unistd.h>

int ft_strlen(char *str)
{
	char *start;

	start = str;	
	while(*str)
	{
		str++;
	}
	return str - start;
}

int main()
{
	char name[] = "me name is Med";
	
	ft_strlen(name);

	char *str;
	str = name;
	while(*str)
	{
		write(1, str++,1);
	}
	write(1,"\n",1);
	return 0;
}
