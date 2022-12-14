#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	char	*str1;
	char 	*str2;
	size_t	i;
	
	if(!s1 || !s2)
		return (NULL);
	ret = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if(!ret)
		return (NULL);	
	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while(*str1)
	{
		ret[i] = *str1;
		i++;
		str1++;
	}
	while(*str2)
	{
		ret[i] = *str2;
		i++;
		str2++;
	}
	ret[i] = '\0';
	return (ret);
}
