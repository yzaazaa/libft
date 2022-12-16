#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*ncell;

	if(!lst || !f || !del)
		return (NULL);
	ret = ft_lstnew(f(lst->content));
	lst = lst->next;
	while(lst)
	{
		ncell = ft_lstnew(f(lst->content));
		ft_lstadd_back(&ret, ncell);
		ft_lstdelone(ncell, del);
		lst = lst->next;
	}
	return (ret);
}
