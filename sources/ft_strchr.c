/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*t;

	t = (char*)s;
	while (*t != c && *t)
		t++;
	if (*t != c)
		return (NULL);
	return (t);
}
