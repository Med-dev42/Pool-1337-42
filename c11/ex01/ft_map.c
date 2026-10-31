#include <stdlib.h>

int	ft_double(int num)
{
	return (num * 2);
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*to_tab;
	int	i;

	if (length <= 0 || !tab)
		return (0);
	to_tab = malloc(length * sizeof(int));
	if (to_tab == 0)
		return (0);
	i = 0;
	while (i < length)
	{
		to_tab[i] = f(tab[i]);
		i++;
	}
	return (to_tab);
}
