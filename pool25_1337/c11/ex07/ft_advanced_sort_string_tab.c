void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int	i;
	int	j;
	char	*temp;

	j = 1;
	while (j)
	{
		j = 0;
		i = 0;
		while (tab[i] && tab[i + 1])
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				j = 1;
			}
			i++;
		}
	}
}
