#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int	i;

	i = 0;
	str = malloc(sizeof(int) * (ft_strlen(s) + 1));
	if(!s || !str)
		return (NULL);
	while(s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
