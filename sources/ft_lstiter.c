/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*tlist;

	while (lst)
	{
		tlist = lst->next;
		f(lst);
		lst = tlist;
	}
}
