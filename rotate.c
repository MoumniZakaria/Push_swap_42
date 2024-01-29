/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:39:31 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/29 10:41:14 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **stack_A, int check)
{
	if (!*stack_A)
		return ;
	(*stack_A) = (*stack_A)->next;
	if (check == 1)
		return ;
	write(1, "ra\n", 3);
}

void	rb(t_list **stack_B, int check)
{
	if (!*stack_B)
		return ;
	(*stack_B) = (*stack_B)->next;
	if (check == 1)
		return ;
	write(1, "rb\n", 3);
}

void	rr(t_list **stack_A, t_list **stack_B, int check)
{
	if (!(*stack_A) && !(*stack_B))
		return ;
	if ((*stack_A))
		ra(stack_A, 1);
	if ((*stack_B))
		rb(stack_B, 1);
	if (check == 0)
		write(1, "rr\n", 3);
}
