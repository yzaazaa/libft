#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int 	last;
	int 	i;
	char	*ptr;
	
	i = 0;
	ptr = (char *)s;
	last = -1;
	while(ptr[i])
	{
		if(ptr[i] == (char)c)
			last = i;
		i++;
	}
	if((char)c == '\0')
		return(ptr + i);
	if(last != -1)
		return(ptr + last);
	return (NULL);
}
