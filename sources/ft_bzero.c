/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

void	ft_bzero(void *str, size_t nb)
{
	char *arry;

	if (nb)
	{
		arry = str;
		while (nb)
		{
			*arry++ = 0;
			nb--;
		}
	}
}
