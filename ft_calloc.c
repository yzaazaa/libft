#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	p = malloc(nmemb * size);
	if(!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}
