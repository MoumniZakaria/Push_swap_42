/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:54:59 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/26 17:51:11 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	chack_nbr(char *s)
{
	int	i;

	i = 0;
	while ((s[i] >= 9 && s[i] <= 13) || (s[i] == 32))
		i++;
	if (s[i] == '-' || s[i] == '+')
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	check_empty(char *s)
{
	int	i;

	i = 0;
	while ((s[i] >= 9 && s[i] <= 13) || (s[i] == 32))
		i++;
	if (s[i] == '\0')
		return (1);
	else
		return (0);
}

int	check_range(char *s)
{
	if (ft_atoi(s) >= INT_MIN && ft_atoi(s) <= INT_MAX)
		return (1);
	return (0);
}

int	check_dup(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = i + 1;
		while (s[j])
		{
			if (ft_atoi(s[i]) == ft_atoi(s[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

t_list	*parssing(int ac, char**av)
{
	int		i;
	char	*rst;
	char	**arg;

	i = 1;
	rst = NULL;
	if (ac < 2)
		return (write(2, "Error\n", 6), NULL);
	while (av[i])
	{
		if (check_empty(av[i]))
			return (write(2, "Error\n", 6), NULL);
		rst = ft_strjoin(rst, av[i]);
		rst = ft_strjoin(rst, " ");
		i++;
	}
	arg = ft_split(rst, ' ');
	i = -1;
	while (arg[++i])
	{
		if (!(chack_nbr(arg[i])) || (!check_range(arg[i])) || (!check_dup(arg)))
			return (write(2, "Error\n", 6), malloc_error(arg)
				, free(rst), arg = NULL, NULL);
	}
	return (free(rst), ft_creat_list(arg));
}
