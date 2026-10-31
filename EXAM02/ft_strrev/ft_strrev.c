int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}


char    *ft_strrev(char *str)
{
	int i;
	int end;
	char swp;

	i = 0;
	end = ft_strlen(str) - 1;
	while (i < end)
	{
		swp = str[i];
		str[i] = str[end];
		str[end] = swp;
		i++;
		end--;
	}
	return str;
}
