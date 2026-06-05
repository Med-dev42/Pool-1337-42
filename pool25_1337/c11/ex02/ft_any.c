int	ft_any(char **tab, int (*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
	{
		j = f(tab[i]);
		if (j != 0)
			return (1);
		i++;
	}
	return (0);
}
