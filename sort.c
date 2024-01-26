/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:41:59 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/26 15:38:55 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_list **stack_A, t_list **stack_B)
{
	int	old_lis;
	int	new_lis;

	old_lis = best_head(*stack_A)->lis;
	while (ft_lstsize(*stack_A) > old_lis)
	{
		sa((stack_A), 1);
		new_lis = best_head(*stack_A)->lis;
		if (new_lis > old_lis)
		{
			old_lis = new_lis;
			write(1, "sa\n", 3);
			continue ;
		}
		sa(stack_A, 1);
		best_head(*stack_A);
		if ((*stack_A)->index == 1)
			ra((stack_A), 0);
		else
			pb(stack_B, stack_A);
	}
}
