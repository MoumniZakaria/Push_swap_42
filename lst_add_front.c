
#include "push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
	return ;
	new->next = new;
	new->prev = new;
	if((*lst))
	{
		new->next = (*lst);
		new->prev = (*lst)->prev;
		(*lst)->prev->next = new;
		(*lst)->prev = new;
	}
	(*lst) = new;
}
