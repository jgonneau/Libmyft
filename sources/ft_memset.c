/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_array;

	b_array = b;
	while (len--)
	{
		*b_array = (unsigned char)c;
		b_array++;
	}
	return (b);
}
