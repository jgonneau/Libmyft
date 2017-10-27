/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	int		i;

	if (s != NULL && f != NULL)
	{
		i = 0;
		while (s[i])
		{
			(*f)(s);
			s++;
			i++;
		}
	}
}
