#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*ncell;
	void	*content;

	if(!lst || !f || !del)
		return (NULL);
	ret = 0;
	while(lst)
	{
		content = f(lst->content);
		ncell = ft_lstnew(content);
		if(!ncell)
		{
			ft_lstclear(&ret, del);
			del(content);
			return (NULL);
		}
		ft_lstadd_back(&ret, ncell);
		lst = lst->next;
	}
	return (ret);
}
