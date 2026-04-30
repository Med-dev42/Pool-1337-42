#include<unistd.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while(src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	
	dest[i + j] = '\0';
	return dest;
}

int main()
{
	char dest[20] = "Hello ";
	char src[] = "sir";
	int	size = 0;

	ft_strcat(dest,src);
	
	while(dest[size])
	{
		size++;
	}

	write(1,&dest,size);

}
