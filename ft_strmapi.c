#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*ret;
	unsigned int	i;
	char		*str;

	if(!s)
		return (NULL);
	ret = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if(!ret)
		return (NULL);
	i = 0;
	str = (char *)s;
	while(str[i])
	{
		ret[i] = f(i, str[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
