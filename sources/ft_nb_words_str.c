/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

int		ft_nb_words_str(char const *str, char c)
{
	int		nb;
	int		i;
	int		r;

	nb = 0;
	i = 0;
	r = 0;
	while (str[i])
	{
		if (str[i] != c && r == 0)
		{
			nb++;
			r = 1;
		}
		if (str[i] == c && r == 1)
			r = 0;
		i++;
	}
	return (nb);
}
