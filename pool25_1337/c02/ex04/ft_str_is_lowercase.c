#include<stdio.h>

int ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
		return 1;
	while(str[i] != '\0')
	{
		if(!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int main()
{
	printf("the result number 1: %d\n",ft_str_is_lowercase("01948987493"));
	printf("the result number 2: %d\n",ft_str_is_lowercase("abscjdiindundj"));
	printf("the result number 3: %d\n",ft_str_is_lowercase("xndjdndndhdd mdd"));
	printf("the result number 4: %d\n",ft_str_is_lowercase("msjnfddNjsunw"));

}
