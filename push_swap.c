/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:08:39 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/26 17:53:21 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// void	fun()
// {
// 	system("leaks push_swap");
// }

int	main(int ac, char **av)
{
	// atexit(fun);
	t_list	*stack_a;
	t_list	*stack_b;
	int		size_b;
	t_best	the_best;

	stack_b = NULL;
	stack_a = parssing(ac, av);
	if (!stack_a)
		return (0);
	ft_sort(&stack_a, &stack_b);
	size_b = ft_lstsize(stack_b);
	while (size_b)
	{
		index_b(&stack_b);
		the_best = best_move(stack_b, stack_a);
		to_a(the_best.best_in_a, the_best.best_in_b, &stack_a, &stack_b);
		size_b--;
	}
	stack_b = NULL;
	end_sort(&stack_a);
	// puts("=====stack a===");
	// ft_print_list_1(stack_a);
	// puts("=====stack b===");
	// ft_print_list_1(stack_b);
	free_all(&stack_a);
}