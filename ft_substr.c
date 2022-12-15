#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	s_len;

	if(!s)
		return (NULL);
	s_len = ft_strlen(s);
	if(s_len <= start)
	{	
		len = 0;
		start = s_len;
	}
	if(len > s_len - start)
		len = s_len - start;
	ret = malloc(sizeof(char) * (len + 1));
	if(!ret)
		return (NULL);
	ft_strlcpy(ret, &s[start], len + 1);
	return (ret);
}
