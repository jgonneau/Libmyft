/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*array;

	if (s == NULL)
		return (NULL);
	array = ft_strnew(len + 1);
	i = 0;
	if (array == NULL)
		return (NULL);
	while (i < len + start)
	{
		if (i >= start)
		{
			array[i - start] = s[i];
		}
		i++;
	}
	return (array);
}
