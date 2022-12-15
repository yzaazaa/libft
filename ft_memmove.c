#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if(!dest && !src)
		return (dest);
	if(src < dest)
		while(n--)
			*(char *)(dest + n) = *(char *)(src + n);
	else if (src > dest)
		ft_memcpy(dest, src, n);
	return (dest);
}
