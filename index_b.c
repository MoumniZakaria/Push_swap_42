/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:43:07 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/26 13:02:21 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	abs_value(int val)
{
	if (val >= 0)
		return (val);
	else
		return (val *(-1));
}

void	index_b(t_list **stack_b)
{
	t_list	*head;
	int		i;
	int		middle;
	int		size;

	if (!(*stack_b) || !stack_b)
		return ;
	i = 0;
	size = ft_lstsize(*stack_b);
	middle = size / 2;
	head = (*stack_b);
	while ((*stack_b))
	{
		if (i > middle)
			(*stack_b)->index = i - size;
		else
			(*stack_b)->index = i;
		i++;
		(*stack_b) = (*stack_b)->next;
		if ((*stack_b) == head)
			break ;
	}
}
