/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:12:57 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/26 12:29:01 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void ft_print_list_1(t_list *head)
{
    t_list *start;
    start = head;
    if (!head)
    {
        puts("khaaaaawi");
        return;
    }
    puts(">>>>>>>>>>>>>\n");
    while (head)
    {
        printf("head : %d \t index : %d\t LIS : %d\n",head->content, head->index, head->lis);
        head = head->next;
        if(head == start)
            break;
    }
    puts("<<__________>>\n");
}

void ft_print_list_2(t_list *head)
{
    t_list *start;
    head = head->prev;
    start = head;
    puts("this with prev >>\n");
    while (head)
    {
        printf("%d\n",head->content);
        head = head->prev;
        if(head->next == start)
            break;
    }
    puts("<<__________>>\n");
}

// void ft_print_list_1(t_list *head)
// {
//     t_list *start;
//     start = head;

//     while (head)
//     {
//         printf("%d\n",head->content);
//         head = head->next;
//         if(head == start)
//             break;
//     }
// }