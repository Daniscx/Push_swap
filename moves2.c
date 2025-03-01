/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:44:47 by dmaestro          #+#    #+#             */
/*   Updated: 2025/03/01 12:06:53 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(stach_t *a)
{
    node_t *aux;
    aux = a->head;
    a->head = aux->next;
    ft_nodeadd_back(a, aux);
}
void    rb(stach_t *b)
{
    node_t *aux;
    if(ft_stacksize(b->head) <= 1)
        return;
    aux = b->head;
    b->head = aux->next;
    ft_nodeadd_back(b,aux);
}
void    rr(stach_t *b, stach_t *a)
{
    ra(a);
    rb(b);
}
void rrb(stach_t *b)
{
   
    node_t *aux;
    node_t *aux2;

     if(ft_stacksize(b->head) <= 1)
        return;
    aux = b->head;
    while(aux->next != NULL)
    {
        aux2 = aux;
        aux = aux->next;
    }
    aux2->next = NULL;
    ft_nodeadd_front(b, aux);
    
    
}
void rra (stach_t *a)
{
    node_t *aux;
    node_t *aux2;

     if(ft_stacksize(a->head) <= 1)
        return;
    aux = a->head;
    while(aux->next != NULL)
    {
        aux2 = aux;
        aux = aux->next;
    }
    aux2->next = NULL;
    ft_nodeadd_front(a, aux);
    
}
void    rrr(stach_t *a, stach_t *b)
{
    rra(a);
    rrb(b);
}