#include "libft.h"

static int	ft_str_chr(char c, char const *set)
{
	while(*set)
	{
		if(c == *set++)
			return (1);
	}
	return (0);
}

char		*ft_strtrim(char const *s, char const *set)
{
	int	start;
	int	i;
	int	end;
	char	*ret;	

	if(!s || !set)
		return (NULL);
	i = 0;
	while(s[i] && ft_str_chr(s[i], set))
		i++;
	start = i;
	i = ft_strlen(s) - 1;
	while(s[i] && ft_str_chr(s[i], set))
		i--;
	end = i;
	ret = ft_substr(s, start, (end - start + 1));
	return (ret);
}
