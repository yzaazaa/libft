#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int	i;

	i = 0;
	if(!s)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if(!str)
		return (NULL);
	while(s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
