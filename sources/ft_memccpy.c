/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char		*dest;
	const char	*src;

	src = s2;
	dest = s1;
	while (n--)
	{
		if (*src == c)
		{
			*dest++ = *src++;
			return (dest);
		}
		*dest++ = *src++;
	}
	return (NULL);
}
