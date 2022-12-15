#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	
	len = ft_strlen(src);
	if(!dest || !src || !size)
		return (len);
	if(len >= size)
		len = size - 1;
	ft_memcpy(dest, src, len);
	dest[len] = 0;
	return (len);
}
