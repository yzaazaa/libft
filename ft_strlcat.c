#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t 	src_len;

	src_len = ft_strlen(src);
	if(!dest || !size)
		return (src_len);
	i = 0;
	j = 0;
	while(dest[i++]);
	while(src[j] && j < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i - 1);
}
