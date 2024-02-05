/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:55:23 by zmoumni           #+#    #+#             */
/*   Updated: 2024/02/02 14:58:27 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(char *str)
{
	int		i;
	int		m;
	long	rst;

	i = 0;
	m = 1;
	rst = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			m = m * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && rst <= INT_MAX)
	{
		rst = (rst * 10) + str[i] - 48 ;
		i++;
	}
	return (rst * m);
}
