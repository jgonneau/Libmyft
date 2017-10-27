/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

char	*ft_strtrim(char const *s)
{
	int d;
	int f;

	d = 0;
	f = ft_strlen(s) - 1;
	while (s[d] == ' ' || s[d] == '\n' || s[d] == '\t')
		d++;
	while (s[f] == ' ' || s[f] == '\n' || s[f] == '\t')
		f--;
	if (d == 0 && f == ft_strlen(s) - 1)
		return (ft_strdup(s));
	else
		return (ft_strsub(s, d, f - d + 1));
}
