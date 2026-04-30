#include<stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{

	char *start = dest;
	if(src == NULL || dest == NULL)
	{
		return NULL;
	}

	while(*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	while(n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return start;
}

int main()
{
	char name[] = "Mamado 6";
	char dest[49];

	ft_strncpy(dest, name,50);
	printf("dest: %s\n", dest);
}
