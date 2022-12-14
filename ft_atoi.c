#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	ret;
	int	sign;
	char 	*ptr;

	ret = 0;
	sign = 1;
	ptr = (char *)nptr;
	if(!ptr)
		return (0);
	while(*ptr >= 0 && *ptr <= 32)
		ptr++;
	if(*ptr == '-' || *ptr == '+')
	{
		if(*ptr == '-')
			sign = -1;
		ptr++;
	}
	while(*ptr >= '0' && *ptr <= '9')
	{
		ret = ret * 10 + (*ptr - '0');
		ptr++;
	}
	return (sign * ret);
}
