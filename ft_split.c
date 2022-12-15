#include "libft.h"

static size_t	len_word(char const *s, char c)
{
	size_t	len;
	
	len = 0;
	while(s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*ft_add_str(char *s, char c)
{
	size_t	len;
	char	*str;

	len = len_word(s, c);
	str = ft_substr(s, 0, len);
	return (str);
}

static char	**ft_free_split(char **arr, int size)
{
	while(size > 0)
		free(arr[size--]);
	free(arr);
	return (NULL);
}

static int	word_count(char const *s, char c)
{
	int		wc;
	int 	i;

	wc = 0;
	i = 0;
	while(s[i])
	{
		while(s[i] && s[i] == c)
			i++;
		if(s[i])
			wc++;
		while(s[i] && s[i] != c)
			i++; 
	}
	return (wc);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	wc;
	char	**ret;
	char	*str;

	if(!s)
		return (NULL);
	wc = word_count(s, c);
	ret = (char **)malloc(sizeof(char *) * (wc + 1));
	if(!ret)
		return (NULL);
	i = 0;
	str = (char *)s;
	while(i < wc)
	{
		while(*str == c)
			str++;
		ret[i] = ft_add_str(str, c);
		if(ret[i] == NULL)
			return(ft_free_split(ret, i - 1));
		str += ft_strlen(ret[i]);
		i++;
	}
	ret[i] = NULL;
	return (ret);
}
