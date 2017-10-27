/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		len2;
	int		i;
	char	*array;

	if (s1 == NULL && s2 == NULL)
		return ((char*)NULL);
	if (s1 == NULL && s2)
		return (ft_strdup(s2));
	if (s2 == NULL && s1)
		return (ft_strdup(s1));
	i = -1;
	len = ft_strlen(s1);
	len2 = len + ft_strlen(s2) + 1;
	array = ft_strnew(len2);
	if (array == NULL)
		return (NULL);
	while (i++ < len2)
	{
		if (i < len)
			array[i] = s1[i];
		else
			array[i] = s2[i - len];
	}
	return (array);
}
