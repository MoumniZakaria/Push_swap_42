/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:04:26 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/30 15:29:21 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_list **Stack_B, t_list **Stack_A, int check)
{
	t_list	*tmp;
	int		ok;

	ok = 0;
	if (!(*Stack_A))
		return ;
	if (ft_lstsize(*Stack_A) == 1)
		ok = 1;
	tmp = (*Stack_A)->next;
	tmp->prev = (*Stack_A)->prev;
	(*Stack_A)->prev->next = tmp;
	(*Stack_A)->next = NULL;
	(*Stack_A)->prev = NULL;
	ft_lstadd_front((Stack_B), (*Stack_A));
	(*Stack_A) = tmp;
	if (ok)
		(*Stack_A) = NULL;
	if (check == 1)
		return ;
	write(1, "pb\n", 3);
}

void	pa(t_list **Stack_A, t_list **Stack_B, int check)
{
	t_list	*tmp;
	int		ok;

	ok = 0;
	if (!(*Stack_B))
		return ;
	if (ft_lstsize(*Stack_B) == 1)
		ok = 1;
	tmp = (*Stack_B)->next;
	tmp->prev = (*Stack_B)->prev;
	(*Stack_B)->prev->next = tmp;
	(*Stack_B)->next = NULL;
	(*Stack_B)->prev = NULL;
	ft_lstadd_front((Stack_A), (*Stack_B));
	(*Stack_B) = tmp;
	if (ok)
		(*Stack_B) = NULL;
	if (check == 1)
		return ;
	write(1, "pa\n", 3);
}
