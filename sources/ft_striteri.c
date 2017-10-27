/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	if (s != NULL && f != NULL)
	{
		i = ft_strlen (s);
		while (s[i])
		{
			(*f)(i, s);
			s++;
			i++;
		}
	}
}
