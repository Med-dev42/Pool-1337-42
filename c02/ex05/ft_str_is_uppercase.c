#include<stdio.h>

int ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
		return 1;
	while(str[i] != '\0')
	{
		if(!(str[i] >= 'A' && str[i] <= 'Z'))
			return 0;
		i++;
	}
	return 1;
}

int main()
{
	printf("result: %d\n",ft_str_is_uppercase("MAMADO"));
	printf("result number 2: %d\n",ft_str_is_uppercase("MAMADO 6"));
}
