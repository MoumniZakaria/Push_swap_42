/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_b_place.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:43:51 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/26 12:54:47 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_b_place(int elem, t_list *stack_a)
{
	t_list	*head;
	int		i;
	int		size;

	size = ft_lstsize(stack_a);
	head = stack_a->prev;
	i = 0;
	while (1)
	{
		if ((elem > head->content && elem < head->next->content)
			|| ((head->content > head->next->content) && (elem > head->content
					|| elem < head->next->content)))
		{
			if (i > size / 2)
				return (i - size);
			else
				return (i);
		}
		i++;
		head = head->next;
		if (head->next == stack_a)
			break ;
	}
	return (i);
}

t_best	best_move(t_list *stack_b, t_list *stack_a)
{
	int		place_in_a;
	t_list	*head;
	t_best	tmp_1;
	t_best	tmp_2;

	head = stack_b;
	tmp_1.best = INT_MAX;
	while (stack_b)
	{
		place_in_a = find_b_place(stack_b->content, stack_a);
		tmp_2 = chose_best(place_in_a, stack_b->index);
		if (tmp_2.best < tmp_1.best)
		{
			tmp_1.best = tmp_2.best;
			tmp_1.best_in_a = tmp_2.best_in_a;
			tmp_1.best_in_b = tmp_2.best_in_b;
		}
		stack_b = stack_b->next;
		if (stack_b == head)
			break ;
	}
	return (tmp_1);
}

t_best	chose_best(int b_in_a, int b_in_b)
{
	t_best	value;

	value.best = -1;
	if ((b_in_a >= 0 && b_in_b >= 0) || (b_in_a < 0 && b_in_b < 0))
	{
		if (abs_value(b_in_a) >= abs_value(b_in_b))
			value.best = abs_value(b_in_a);
		else
			value.best = abs_value(b_in_b);
		value.best_in_a = b_in_a;
		value.best_in_b = b_in_b;
	}
	else
	{
		value.best_in_a = b_in_a;
		value.best_in_b = b_in_b;
		value.best = abs_value(b_in_a) + abs_value(b_in_b);
	}
	return (value);
}

void	to_a(int best_a, int best_b, t_list **stack_a, t_list **stack_b)
{
	while (best_a < 0 && best_b < 0)
	{
		rrr(stack_a, stack_b, 1);
		best_a++;
		best_b++;
	}
	while (best_a > 0 && best_b > 0)
	{
		rr(stack_a, stack_b, 1);
		best_a--;
		best_b--;
	}
	ft_check(best_a, best_b, stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	ft_check(int best_a, int best_b, t_list **stack_a, t_list **stack_b)
{
	while (best_a > 0)
	{
		ra(stack_a, 0);
		best_a--;
	}
	while (best_a < 0)
	{
		rra(stack_a, 0);
		best_a++;
	}
	while (best_b < 0)
	{
		rrb(stack_b, 0);
		best_b++;
	}
	while (best_b > 0)
	{
		rb(stack_b, 0);
		best_b--;
	}
}
