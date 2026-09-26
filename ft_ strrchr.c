#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (s[i] == (unsigned char)c)
	{
		return ((char *)&s[i]);
	}
	while (i > 0)
	{
		i--;
		if (s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
	}
	return (0);
}
