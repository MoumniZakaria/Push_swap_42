/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:43:42 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/26 12:40:04 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_list *stack_a)
{
	t_list	*head;
	int		min;
	int		index;
	int		i;

	min = stack_a->content;
	head = stack_a;
	i = 0;
	index = 0;
	while (stack_a)
	{
		if (stack_a->content < min)
		{
			index = i;
			min = stack_a->content;
		}
		i++;
		stack_a = stack_a->next;
		if (stack_a == head)
			break ;
	}
	return (index);
}

void	end_sort(t_list **stack_a)
{
	int	size_a;
	int	midl;
	int	i;

	i = get_min(*stack_a);
	size_a = ft_lstsize(*stack_a);
	midl = size_a / 2;
	if (i > midl)
		i = i - size_a;
	while (i < 0)
	{
		rra(stack_a, 0);
		i++;
	}
	while (i > 0)
	{
		ra(stack_a, 0);
		i--;
	}
}
