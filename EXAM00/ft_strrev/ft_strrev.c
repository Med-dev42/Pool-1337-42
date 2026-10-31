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

char    *ft_strrev(char *str)
{
	int i;
	int  length;
	int middle;
	char temp;
	
	i = 0;
	length = ft_strlen(str);
	middle = length / 2;
	while(i < middle)
	{
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
		i++;
	}
	return str;

}

