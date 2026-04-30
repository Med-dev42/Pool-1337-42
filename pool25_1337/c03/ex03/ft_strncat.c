#include<unistd.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	while(dest[i] != '\0')
	{
		i++;
	}

	while(src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';
	return dest;

}

int main()
{
	char dest[20] = "hello ";
	char src[] = "sir nor";
	int size = 0;

	ft_strncat(dest, src, 3);

	while(dest[size])
	{
		size++;
	}

	write(1,&dest,size);
	write(1,"\n",1);
	return 0;
}
