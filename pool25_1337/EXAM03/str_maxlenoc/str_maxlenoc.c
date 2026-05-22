#include<unistd.h>

int strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

int strstr(char *s1,char *s2, int len)
{
	int i;
	int j;

	if (len == 0)
		return (1);
	i =  0;
	while(s1[i] != '\0')
	{
		j = 0;
		while(s1[i + j] == s2[j] && j < len)
		{
			j++;
		}

		if (j == len)
			return 1;
		i++;
	}
	return 0;

}

int main(int argc, char **argv)
{
	int len_max;
	int len;
	int start;
	int i;
	int k;
	char *result;
	
	if(argc < 2)
	{
		write(1,"\n",1);
		return 0;
	}
	
	len_max = strlen(argv[1]);
	len = len_max;

	while(len > 0)
	{
		start = 0;
		while(start + len <= len_max)
		{
			k = 2;
			while(k < argc)
			{
				if(strstr(argv[k], &argv[1][start], len) == 0)
				{
					break;
				}
				k++;
			}

			if(k == argc)
			{
				result = (char *)malloc(sizeof(char) * (len + 1));
				if (!result)
					return 1;
				i = 0;
				while (i < len)
				{
					result[i] = argv[1][start + i];
					i++;
				}
				result[i] = '\0';
				write(1, result, len);
				write(1, "\n", 1);
				free(result);
				return 0;
			}
			start++;
		}
		len--;
	
	}
	write(1, "\n", 1);
	return (0);

}
