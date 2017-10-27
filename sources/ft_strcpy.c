/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

char	*ft_strcpy(char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (s1)
	{
		while (s2[i])
		{
			s1[i] = s2[i];
			i += 1;
		}
		s1[i] = '\0';
	}
	return (s1);
}
