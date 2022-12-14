#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	if(!needle)
		return((char *)haystack);
	while(*haystack)
	{
		i = 0;
		while(haystack[i] == needle[i])
		{
			i++;
			if(needle[j] == '\0')
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
