/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char		*dest;
	const char	*src;

	src = s2;
	dest = s1;
	while (n--)
		*dest++ = *src++;
	return (s1);
}
