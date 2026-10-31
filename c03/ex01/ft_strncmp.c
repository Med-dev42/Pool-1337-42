#include<unistd.h>
#include<stdio.h>

int ft_strcmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;

	while(s1[i] == s2[i] && i < n - 1 && s1[i] != '\0')
	{
		i++;
	}

	return s1[i] - s2[i];
}

int main()
{
	char *s1 = "hello";
	char *s2 = "helly";

	printf("Test 1 (Same): %d\n", ft_strcmp(s1, s2, 5));
}
