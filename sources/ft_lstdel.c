/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tlist;
	
	while((*alst))
	{
			tlist = (*alst)->next;
			ft_lstdelone(alst, del);
			*alst = tlist;
	}
}
