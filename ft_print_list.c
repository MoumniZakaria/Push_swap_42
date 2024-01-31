/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:12:57 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/31 12:32:39 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_list_1(t_list *head)
{
	t_list	*start;

	start = head;
	if (!head)
	{
		// puts("khaaaaawi");
		return ;
	}
	// puts(">>>>>>>>>>>>>\n");
	while (head)
	{
		// printf ("head:%d\tindex:%d\tLIS:%d\n", \
		// head->content, head->index, head->lis);
		head = head->next;
		if (head == start)
			break ;
	}
	// puts("<<__________>>\n");
}
