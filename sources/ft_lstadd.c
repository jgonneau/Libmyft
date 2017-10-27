/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list *tlist;
	
	tlist = *alst;
	*alst = new;
	new->next = tlist;
}
