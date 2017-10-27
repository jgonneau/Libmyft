/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int	i;
	char	*ret;

	i = 0;
	ret = ft_strnew(ft_strlen(s));
	while (*s)
	{
		ret[i] = (*f)(*s);
		i++;
		s++;
	}
	return (ret);
}
