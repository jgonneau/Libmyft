/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s2[j])
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		if (s1[i] == s2[j])
		{
			while ((s1[i + j] == s2[j]) && s1[i + j] && s2[j] && ((i + j) < n))
			{
				j++;
			}
			if (!s2[j])
				return ((char *)(s1 + i));
			else
				j = 0;
		}
		i++;
	}
	return (NULL);
}
