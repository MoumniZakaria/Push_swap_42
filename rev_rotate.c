/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:39:56 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/29 10:41:21 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **stack_A, int check)
{
	if (!*stack_A)
		return ;
	(*stack_A) = (*stack_A)->prev;
	if (check == 1)
		return ;
	write(1, "rra\n", 4);
}

void	rrb(t_list **stack_B, int check)
{
	if (!*stack_B)
		return ;
	(*stack_B) = (*stack_B)->prev;
	if (check == 1)
		return ;
	write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_A, t_list **stack_B, int check)
{
	if (!(*stack_A) && !(*stack_B))
		return ;
	if ((*stack_A))
		rra(stack_A, 1);
	if ((*stack_B))
		rra(stack_B, 1);
	if (check == 0)
		write(1, "rrr\n", 4);
}
