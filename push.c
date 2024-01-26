#include "push_swap.h"

void  pb(t_list **Stack_B, t_list **Stack_A)
{
        t_list    *tmp;

    tmp = (*Stack_A)->next;
    tmp->prev = (*Stack_A)->prev;
    (*Stack_A)->prev->next = tmp;
    ft_lstadd_front((Stack_B), (*Stack_A));
    (*Stack_A) = tmp;
    // if (heada && prntbl)
    write(1, "pb\n", 3);
}


void  pa(t_list **Stack_A, t_list **Stack_B)
{

    t_list    *tmp;

    tmp = (*Stack_B)->next;
    tmp->prev = (*Stack_B)->prev;
    (*Stack_B)->prev->next = tmp;
    ft_lstadd_front((Stack_A), (*Stack_B));
    (*Stack_B) = tmp;
    // if (heada && prntbl)
    write(1, "pa\n", 3);

    // if((*Stack_B)->next == NULL)
    //     (*Stack_A) = NULL;

    // t_list  *tmp;
    // t_list  *last;

    // if (!*Stack_B)
    //     return ;
    // last = ft_lstlast((*Stack_B));
    // // printf("value of last >> %d\n",last->content);
    // tmp = (*Stack_B);
    // (*Stack_B) = (*Stack_B)->next;

    // (*Stack_B)->prev = last;
    // last->next = (*Stack_B);

    // tmp->prev = (*Stack_A)->prev;
    // (*Stack_A)->prev->next = tmp;

    // tmp->next = (*Stack_A);
    // (*Stack_A)->prev = tmp;

    // (*Stack_A) = tmp;
    // write(1,"pa\n",3);
}




    // t_list    *tmp;

    // tmp = heada->next;
    // tmp->prev = heada->prev;
    // heada->prev->next = tmp;
    // ft_lstadd_front(&headb, heada);
    // heada = tmp;
    // if (heada && prntbl)
    //     write(1, "pb\n", 3);