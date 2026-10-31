#include<stdio.h>

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
	return str;
}

int main()
{
	char name[] = "MAMADO 6";

	ft_strlowcase(name);

	printf("the result: %s\n", name);
}
