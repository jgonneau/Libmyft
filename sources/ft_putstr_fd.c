/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	char *ptr;

	ptr = (char *)s;
	while (*ptr)
		ptr += 1;
	write(fd, s, (ptr - s));
}
