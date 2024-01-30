/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lis.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:45:55 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/29 21:00:03 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_lis(t_list **stack_a, int ok)
{
	t_list	*head;
	t_list	*tmp;
	int		cp;

	cp = 0;
	head = (*stack_a);
	tmp = (*stack_a);
	while (head)
	{
		head->index = 0;
		if (tmp->content <= head->content)
		{
			cp++;
			tmp = head;
			if (ok)
				tmp->index = 1;
		}
		head = head->next;
		if (head == (*stack_a))
			break ;
	}
	head->lis = cp;
	return (cp);
}

t_list	*best_head(t_list *stack_a)
{
	t_list	*head;
	t_list	*tmp;
	int		curr_lis;
	int		new_lis;

	tmp = stack_a;
	curr_lis = 0;
	while (tmp)
	{
		new_lis = get_lis(&tmp, 0);
		if (new_lis > curr_lis)
		{
			curr_lis = new_lis;
			head = tmp;
		}
		tmp = tmp->next;
		if (tmp == stack_a)
			break ;
	}
	get_lis(&head, 1);
	return (head);
}
