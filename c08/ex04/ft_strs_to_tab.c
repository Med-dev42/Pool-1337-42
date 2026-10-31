#include "ft_stock_str.h"
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

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == 0)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int		i;
	t_stock_str	*array;

	array = malloc(sizeof(t_stock_str) * (ac + 1));
	if (array == 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].str = 0;
	return (array);
}
