/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:21:47 by zmoumni           #+#    #+#             */
/*   Updated: 2024/02/01 17:45:03 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sorted(t_list	*stack_a)
{
	t_list	*head;
	t_list	*next;

	if (!stack_a)
		return (0);
	head = stack_a;
	while (1)
	{
		next = head->next;
		if (head->content > next->content)
			return (0);
		head = head->next;
		if (head->next == stack_a)
			break ;
	}
	return (1);
}

int	instroctions(t_list **stack_a, t_list **stack_b, char *cmd)
{
	if (ft_strcmp("sa\n", cmd) == 1)
		sa(stack_a, 1);
	else if (ft_strcmp("sb\n", cmd) == 1)
		sb(stack_b, 1);
	else if (ft_strcmp("ss\n", cmd) == 1)
		ss(stack_a, stack_b, 1);
	else if (ft_strcmp("ra\n", cmd) == 1)
		ra(stack_a, 1);
	else if (ft_strcmp("rb\n", cmd) == 1)
		rb(stack_b, 1);
	else if (ft_strcmp("rr\n", cmd) == 1)
		rr(stack_a, stack_b, 1);
	else if (ft_strcmp("rra\n", cmd) == 1)
		rra(stack_a, 1);
	else if (ft_strcmp("rrb\n", cmd) == 1)
		rrb(stack_b, 1);
	else if (ft_strcmp("rrr\n", cmd) == 1)
		rrr(stack_a, stack_b, 1);
	else if (ft_strcmp("pa\n", cmd) == 1)
		pa(stack_a, stack_b, 1);
	else if (ft_strcmp("pb\n", cmd) == 1)
		pb(stack_b, stack_a, 1);
	else
		return (write(1, "Error\n", 6), 0);
	return (1);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*cmd;

	stack_b = NULL;
	stack_a = parssing(ac, av);
	if (!stack_a)
		return (0);
	cmd = get_next_line(0);
	while (cmd != NULL)
	{
		if (instroctions(&stack_a, &stack_b, cmd))
		{
			free(cmd);
			cmd = NULL;
			cmd = get_next_line(0);
		}
		else
			return (free_all(&stack_a), free_all(&stack_b), free(cmd), 0);
	}
	if (ft_is_sorted(stack_a) == 1 && !ft_lstsize(stack_b))
		return (write(1, "OK\n", 3), free_all(&stack_b), free_all(&stack_a), 0);
	else
		return (write(1, "KO\n", 3), free_all(&stack_b), free_all(&stack_a), 0);
}
