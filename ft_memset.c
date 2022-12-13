#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t		i;

	i = 0;
	str = (unsigned char *)s;
	while(i < n)
		str[i++] = (char)c;
	return (str);
}
