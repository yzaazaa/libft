#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char 		*temp;
	char 		*str;
	const char 	*ptr;
	size_t		i;

	temp = malloc(sizeof(char) * n);
	i = 0;
	str = (char *)dest;
	ptr = (const char *)src;
	while(i < n)
	{
		temp[i] = ptr[i];
		str[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}
