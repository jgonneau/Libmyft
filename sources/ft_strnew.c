/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = malloc(sizeof(*str) * (size + 1));
	if (str)
	{
		ft_bzero(str, (size + 1));
		return (str);
	}
	return (NULL);
}
