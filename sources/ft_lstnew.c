/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau                                        */
/*                                                           */
/* ********************************************************* */

#include "libmyft.h"

 t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;
	
	if (content == NULL)
	{
		lst->content = NULL;
		lst->content_size = 0;
		lst->next = NULL;
		return (lst);
	}
	lst = malloc(sizeof(t_list));
	lst->content = ft_strdup(content);
	lst->content_size = content_size;
	lst->next = NULL;
	return (lst);
}

