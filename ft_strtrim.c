#include "libft.h"

static int	ft_isblank(char c)
{
	if(c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int	start;
	int	i;
	int	end;
	char	*ret;	

	i = 0;
	while(ft_isblank(s[i++]));
	start = i;
	i = ft_strlen(s) - 1;
	while(ft_isblank(s[i--]));
	end = i;
	ret = ft_substr(s, start, (end - start + 1));
	return (ret);
}
