#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	if(!s)
		return (NULL);
	if(ft_strlen(s) < start)
		len = 0;
	ret = malloc(sizeof(char) * (len + 1));
	if(!ret)
		return (NULL);
	i = 0;
	while(i < len)
	{
		ret[i++] = s[start++];	
	}
	ret[i] = '\0';
	return (ret);
}
