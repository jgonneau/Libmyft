/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

int		ft_atoi(char *nb)
{
	int		c;
	int		sign;
	int		n;
	char	*s;

	s = ft_strtrim(nb);
	c = 0;
	if (s[c] == '-')
		sign = -1;
	if (s[c] == '+' || s[c] == '-' || s[c] == ' ')
		c++;
	n = 0;
	while (s[c] != '\0' && ft_isdigit(s[c]))
	{
		n = n * 10 + s[c] - '0';
		c++;
	}
	ft_strdel(&s);
	if (sign == -1)
		n = -n;
	return (n);
}
