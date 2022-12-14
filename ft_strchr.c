#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while(ptr)
	{
		if(*ptr == (char)c)
			return (ptr);
		ptr++;
	}
	if((char)c == '\0')
		return (ptr);
	return (NULL);
}
