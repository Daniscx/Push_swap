/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s_ultis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:09:53 by dmaestro          #+#    #+#             */
/*   Updated: 2025/03/01 18:27:16 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_sqroot(int lenth)
{
    int result;

    result = 1;
    while(result * result < lenth)
        result++;
    if(result * result > lenth && result*result - lenth >  lenth - ((result - 1)*(result - 1)))
        result--;

    return(result); 
}

int ft_checker(char **nb)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(nb[i])
    {
        j = 0;
        while(nb[i][j])
        {
            if(nb[i][j] != '-' && ft_isdigit(nb[i][j] != 0))
                return(0);
            j++;
            if(ft_atoi(nb[i] )< -2147483647  || ft_atoi(nb[i]) > 2147483647)
                return(0);
        }
        i++;
    }
    return(1);;

}
void take_the_data(data_t *data, stach_t *a)
{
    stach_t *aux;
    node_t *auxn;
    int i;

    i = 0;
    aux = a;
    auxn = aux->head;
    data->biggest = auxn->value;
    data->smallest = auxn->value;
    while(auxn !=  NULL)
    {
        if(data->biggest < auxn->value)
        {
            data->biggest = auxn->value;
            i = data->position;
        }
        if(data->smallest > auxn->value)
            data->smallest = auxn->value;
        auxn = auxn->next;
        i++;
    }

}

void checker2(stach_t *a)
{
    int i;
    node_t *aux;
    node_t  *aux2;
    
    i = a->head->value;
    aux = a->head;
    while( aux && i != ft_nodelast(aux)->value)
    {
        aux2 = aux;
        i = aux->value;
        while(aux2 != NULL)
        {
            if(i == aux2->value)
                return ;
            aux2 = aux2->next;

        }
        aux = aux->next;
    }
}
void checkpositions(stach_t *b)
{
    int i;
    node_t *aux;
    node_t  *aux2;
    node_t  *aux3;
    
    i = b->head->value;
    aux = b->head;
    aux3 = b->head;

    while( aux && i != ft_nodelast(aux)->value)
    {
        aux2 = aux3;
        i = aux->value;
        while(aux2 != NULL)
        {
            if(i > aux2->value)
                aux->position++;
            aux2 = aux2->next;

        }
        aux = aux->next;
    }

}
