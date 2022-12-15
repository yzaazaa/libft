#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ret;

	if(size == 0)
		return (NULL);
	ret =  malloc(size);
	if(!ret)
		return (NULL);
	ft_memset(ret, 0, size);
	return (ret);
}
