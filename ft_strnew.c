#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ret;

	if(size == 0)
		return (NULL);
	ret = malloc(sizeof(char) * (size + 1));
	if(!ret)
		return (NULL);
	ft_memset(ret, 0, size + 1);
	return (ret);
}
