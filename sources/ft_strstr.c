/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s2[j])
		return ((char *)s1);
	while (s1[i])
	{
		if (s1[i] == s2[j])
		{
			while ((s1[i + j] == s2[j]) && s1[i + j] && s2[j])
			{
				j++;
			}
			if (!s2[j])
				return ((char *)(s1 + i));
			else
			{
				j = 0;
			}
		}
		i++;
	}
	return (NULL);
}
