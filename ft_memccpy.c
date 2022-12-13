#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char 		*str;
	const char	*ptr;

	if(!dest && !src)
		return (NULL);
	if(dest == src)
		return (NULL);
	str = (char *)dest;
	ptr = (const char *)src;
	i = 0;
	while(i < n)
	{
		str[i] = ptr[i];
		if(ptr[i] == (char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
