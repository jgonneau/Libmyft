/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*dest;
	const char	*src;

	src = s2;
	dest = s1;
	if (s1 <= s2)
		return (ft_memcpy(s1, s2, n));
	src += n;
	dest += n;
	while (n--)
		*--dest = *--src;
	return (s1);
}
