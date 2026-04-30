#include<unistd.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if(to_find[0] == '\0')
	{
		return str;
	}

	i = 0;
	while(str[i] != '\0')
	{
		j = 0;
		while(str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}

		if(to_find[j] == 0)
		{
			return &str[i];
		}
		i++;
	}

	return 0;
}

int main()
{
	char str[30] = "hello sir, how are you?";
	char to_find[] = "sir";
	int size = 0;

	char *s = ft_strstr(str, to_find);

	while(s[size])
	{
		size++;
	}
	
	write(1,s,size);
	write(1,"\n",1);
	return 0;
}
