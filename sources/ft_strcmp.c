/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (s1 == NULL && s2 == NULL)
		return (0);
	if (s1 == NULL)
		return (-1);
	if (s2 == NULL)
		return (1);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (ft_strlen(s1) <= ft_strlen(s2))
		return (((unsigned int)s1[i]) - ((unsigned int)s2[i]));
	else
		return (((unsigned int)s2[i]) - ((unsigned int)s1[i]));
}
