#include "libft.h"

void	ft_strclr(char *s)
{
	int	i;

	if(!s)
		return ;
	i = 0;
	while(s[i])
	{
		s[i++] = '\0';
	}
}
