/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:40:29 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/26 12:41:49 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(t_list **stack_A)
{
	t_list	*tmp;

	if (!stack_A || !(*stack_A))
		return ;
	while (1)
	{
		if ((*stack_A)->next == (*stack_A))
		{
			free((*stack_A));
			break ;
		}
		tmp = (*stack_A);
		(*stack_A) = (*stack_A)->next;
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		tmp->next = NULL;
		tmp->prev = NULL;
		free(tmp);
		tmp = NULL;
	}
}
