#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;	
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char *ft_strdup(char *src)
{
	int	i;
	int	size;
	char	*dest;

	size = ft_strlen(src);
	dest = (char *)malloc((size + 1) * sizeof(char));
	if (dest == NULL)
	{
		return NULL;
	}
	
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return dest;
}

int main()
{
	char name[] = "Mamado 6";
	char *result;

	result = ft_strdup(name);

	ft_putstr(result);

	free(result);
	result = NULL;
	return 0;
}
