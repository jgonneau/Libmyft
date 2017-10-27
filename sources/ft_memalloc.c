/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

void	*ft_memalloc(size_t size)
{
	unsigned int	i;
	char			*index;
	void			*m;

	i = 0;
	m = (void *)malloc(size);
	index = (char *)m;
	if (m != NULL)
	{
		while (i++ < size)
			*index++ = 0;
	}
	return (m);
}
