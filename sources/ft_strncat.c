/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		ls1;
	size_t	i;

	if (!s1)
		return (NULL);
	i = 0;
	ls1 = ft_strlen(s1);
	while (*s2 && i < n)
	{
		s1[ls1 + i] = s2[i];
		i++;
	}
	s1[ls1 + i] = '\0';
	return (s1);
}
