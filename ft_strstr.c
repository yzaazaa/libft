#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	first;

	i = 0;
	first = -1;
	while(haystack[i])
	{
		j = 0;
		if(haystack[i] == needle[j])
		{
			first = i;
			while(haystack[i] == needle[j] && haystack[i] && needle[j])
			{
				i++;
				j++;
			}
			if(needle[j] == '\0')
				return (first);
		}
		i++;
	}
	return (NULL);
}
