#include<stdio.h>

int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
		return 1;

	while(str[i] != '\0')
	{
		if (!((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90)))
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int main()
{
	char name[] = "  ";
	printf("result: %d\n",ft_str_is_alpha(name));
}
