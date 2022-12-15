#include "libft.h"

static int	nbrdigits(int n)
{
	int	nbdigits;

	nbdigits = 0;
	if(n == 0 || n == 1)
		return (1);
	while(n >= 1)
	{
		n /= 10;
		nbdigits++;
	}
	return (nbdigits);
}

char		*ft_itoa(int n)
{
	char	*ret;
	int	isneg;
	int	nbdigits;
	int	len;

	if(n < 0)
	{
		isneg = 1;
		n = -n;
	}
	else
		isneg = 0;
	nbdigits = nbrdigits(n);
	len = nbdigits + isneg + 1;
	ret = malloc(sizeof(char) * len);
	if(!ret)
		return (NULL);
	ret[--len] = '\0';
	if(isneg == 1)
		ret[0] = '-';
	while(nbdigits-- > 0)
	{
		ret[--len] = n % 10 + '0';
		n /= 10; 
	}
	return (ret);
}
