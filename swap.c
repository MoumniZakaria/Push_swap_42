/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:37:47 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/29 18:51:20 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **stack_A, int check)
{
	t_list	*tmp;

	if (!*stack_A)
		return ;
	tmp = (*stack_A);
	(*stack_A) = (*stack_A)->next;
	tmp->next = (*stack_A)->next;
	tmp->prev->next = (*stack_A);
	(*stack_A)->next->prev = tmp;
	(*stack_A)->next = tmp;
	(*stack_A)->prev = tmp->prev;
	tmp->prev = (*stack_A);
	if (check == 1)
		return ;
	write(1, "sa\n", 3);
}

void	sb(t_list **stack_B, int check)
{
	t_list	*tmp;

	if (!(*stack_B))
		return ;
	tmp = (*stack_B);
	(*stack_B) = (*stack_B)->next;
	tmp->next = (*stack_B)->next;
	tmp->prev->next = (*stack_B);
	(*stack_B)->next->prev = tmp;
	(*stack_B)->next = tmp;
	(*stack_B)->prev = tmp->prev;
	tmp->prev = (*stack_B);
	if (check == 1)
		return ;
	write(1, "sb\n", 3);
}

void	ss(t_list **stack_A, t_list **stack_B, int check)
{
	if (!(*stack_A) && !(*stack_B))
		return ;
	if ((*stack_A))
		sa(stack_A, 1);
	if ((*stack_B))
		sb(stack_B, 1);
	if (check == 0)
		write(1, "ss\n", 3);
}
