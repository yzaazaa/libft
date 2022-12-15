#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*str;
	const char 	*ptr;
	size_t		i;

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
		i++;
	}
	return (dest);
}
