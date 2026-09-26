#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size_dest;

	size_dest = ft_strlen(dst);
	if (size_dest >= dstsize)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && (size_dest + (int)i + 1) < dstsize)
	{
		dst[size_dest + i] = src[i];
		i++;
	}
	dst[size_dest + i] = '\0';
	return (size_dest + ft_strlen(src));
}
