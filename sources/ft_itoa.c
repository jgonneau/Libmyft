/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

size_t		ft_nb_dgt(int nb)
{
	int		n;
	size_t	i;
	
	i = 0;
	if (nb < 0)
	{
		i++;
		nb = nb * -1;
	}
	n = nb;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ret;
	char	*tmp;
	int		sgn;
	int		i;
	
	sgn = 0;
	if (n < 0)
	{
		n = n * -1;
		sgn = 1;
	}
	i = ft_nb_dgt(n);
	tmp = ft_strnew(i);
	while (0 <= --i)
	{
		tmp[i] = '0' + (n % 10);
		n /= 10;
	}
	if (sgn == 1)
		ret = ft_strjoin("-", tmp);
	else
		ret = ft_strdup(tmp);
	ft_strdel(&tmp);
	return (ret);
}
