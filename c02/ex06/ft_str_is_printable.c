#include<stdio.h>

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
		return 1;
	while(str[i] != '\0')
	{
		if(!(str[i] >= 32 && str[i] <= 126))
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int main()
{
	char *test1 = "Hello, World! 123";
	char *test2 = "Line\nBreak";
	char *test3 = "Tab	Space";
	char *test4 = "";

	printf("Test 1 (Normal): %d\n", ft_str_is_printable(test1));
	printf("Test 2 (Newline): %d\n", ft_str_is_printable(test2));
	printf("Test 3 (Tab): %d\n", ft_str_is_printable(test3));
	printf("Test 4 (Empty): %d\n", ft_str_is_printable(test4));
}
