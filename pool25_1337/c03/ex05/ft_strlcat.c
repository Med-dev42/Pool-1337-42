#include<unistd.h>

unsigned int ft_strlen(char *s)
{
	unsigned int len;
	len = 0;
	while(s[len])
	{
		len++;
	}
	return len;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int src_len;
	unsigned int dest_len;
	
	src_len = ft_strlen(src);

	dest_len = 0;
        while(dest[dest_len] != '\0' && dest_len < size)
        {
                dest_len++;
        }

	if(size <= dest_len)
        {
                return size + src_len;
	}
	j =  0;
	i = dest_len;
	while(src[j] != '\0' && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';
	return src_len + dest_len;
}

int main()
{
	char dest[50] = "hello, sir";
	char src[] = "how are you";
	int size =  0;

	ft_strlcat(dest, src, 50);

	while(dest[size])
	{
		size++;
	}

	write(1,dest,size);
	write(1,"\n",1);
	return 0;
}
