#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;

	if(!lst || !del)
		return ;
	if(!*lst)
	{
		free(*lst);
		return ;
	}
	while(*lst)
	{
		tmp = *lst;
		*lst = *lst->next;
		ft_lstdelone(tmp, del);
	}
}
