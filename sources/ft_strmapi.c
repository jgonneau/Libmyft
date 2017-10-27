/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;

	i = 0;
	ret = ft_strnew(ft_strlen(s));
	while (*s)
	{
		ret[i] = (*f)(i, *s);
		i++;
		s++;
	}
	return (ret);
}

