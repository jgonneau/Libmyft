/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

void ft_putstr(char const *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
