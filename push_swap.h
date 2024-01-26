/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:54:50 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/26 17:21:45 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <libc.h>

typedef struct s_list
{
	int			content;
	int			index;
	int			lis;
	struct s_list	*next;
	struct s_list	*prev;
}		t_list;

typedef struct s_best
{
	int	best;
	int	best_in_a;
	int	best_in_b;
}		t_best;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		abs_value(int val);
long	ft_atoi( char *str);
char	*ft_strdup(char *src);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char  *str, char c);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strchr( char *s, int c);
char	**malloc_error(char **tbl);
size_t	ft_strlcpy(char *dst,  char *src, size_t size);
int		ft_strlen(char *str);

void	to_a(int best_a, int best_b, t_list **stack_a, t_list **stack_b);
void	ft_check(int best_a, int best_b, t_list **stack_a, t_list **stack_b);

t_list	*parssing(int ac, char**av);

t_list	*ft_lstnew(int	content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);

int		ft_lstsize(t_list *lst);

void	ft_lstdelone(t_list **lst);

t_list	*ft_creat_list(char **s);
void	ft_print_list_1(t_list *head);
void	ft_print_list_2(t_list *head);

		/* PUSH */
void	pb(t_list **stack_B, t_list **stack_A);
void	pa(t_list **Stack_A, t_list **Stack_B);


		/* SWAP */
void	sa(t_list **stack_A, int check);
void	sb(t_list **stack_A, int check);
void	ss(t_list **stack_A, t_list **stack_B, int check);

		/* ROTATE */
void  	rb(t_list **stack_B, int check);
void  	ra(t_list **stack_A, int check);
void  	rr(t_list **stack_A, t_list **stack_B, int check);
		/* REV_ROTATE */
void  	rra(t_list **stack_A, int check);
void  	rrb(t_list **stack_B, int check);
void  	rrr(t_list **stack_A, t_list **stack_B, int check);

// int		fake_swap(t_list **stack_A);
void	ft_sort(t_list **stack_A, t_list **stack_B);

		/*LIS */
void	reset_index_a(t_list **stack_a);
int		get_lis(t_list **stack_a, int a);
t_list	*best_head(t_list *stack_a);

		/*FREE IN CASES ERROR OR AT END */
void	free_all(t_list **stack_A);

void    index_b(t_list **stack_b);

int find_b_place(int elem, t_list *stack_a);

t_best chose_best(int	b_in_a, int	b_in_b);
int get_grandi(t_list *stack_a);
t_best    best_move(t_list *stack_b, t_list *stack_a);


void 	end_sort(t_list **stack_a);
# endif