/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:44:35 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/26 13:08:04 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int		cp;
	t_list	*tmp;

	cp = 0;
	if (!lst)
		return (0);
	tmp = lst;
	while (tmp)
	{
		cp++;
		tmp = tmp->next;
		if (tmp == lst)
			break ;
	}
	return (cp);
}
