/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 21:37:07 by dmaestro          #+#    #+#             */
/*   Updated: 2025/03/01 18:15:45 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(stach_t *a)
{
   stach_t *swap;
    node_t *aux;
    if(ft_stacksize(a->head) <= 1)
        return ;

    swap = a;
   aux = swap->head->next;
    swap->head->next = aux->next;
    aux->next = swap->head;
    a->head = aux; 
     
}
void sb(stach_t *b)
{
    stach_t *swap;
    node_t *aux;
    if(ft_stacksize(b->head) <= 1)
        return ;

    swap = b;
   aux = swap->head->next;
    swap->head->next = aux->next;
    aux->next = swap->head;
    b->head = aux; 
     
}
void ss(stach_t *a, stach_t *b)
{
    sa(a);
    sb(b);
}
void pb(stach_t *a, stach_t *b)
{
    stach_t *pa;
    node_t  *aux;

    if(ft_stacksize(a->head) < 1)
        return ;
    pa = a;
    aux = pa->head;
    pa->head = pa->head->next;
    ft_nodeadd_front(b, aux);
}
void pa(stach_t *a, stach_t *b)
{
    stach_t *pb;
    node_t *aux;

    if(ft_stacksize(b->head) < 1)
        return ;
    pb = b;
    aux = pb->head;
    pb->head = aux->next;
    ft_nodeadd_front(a, aux);
    

}
