/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	ls1;
	size_t	ls2;

	ls1 = 0;
	ls2 = 0;
	while (s1[ls1])
		ls1++;
	while (s2[ls2])
		s1[ls1++] = s2[ls2++];
	s1[ls1] = '\0';
	return (s1);
}
