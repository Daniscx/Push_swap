/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:57:11 by dmaestro          #+#    #+#             */
/*   Updated: 2025/03/01 18:29:56 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ksort (stach_t *a, stach_t *b)
{
    int i;
    int ps;
    data_t  *data;

    data = NULL;
    data =(data_t *)malloc(sizeof(data_t));
    take_the_data(data, a);
    i = ft_sqroot(ft_stacksize(a->head))* (14 / 10);
    ps = 0;

    while(a->head != NULL)
    {

        if(a->head->position <= ps)
        {
            pb(a, b);
            rb(b);
            ps++;
        }
        else if(a->head->position <= i + ps)
        {
            pb(a , b);
            ps++;
        }
        else
        ra(a);

    }
    second_part(a, b, data);
}

void    second_part(stach_t *a, stach_t *b, data_t *data)
{
    int i;

    while(b->head != NULL)
    {
        take_the_data(data, b);
        i = ft_stacksize(b->head);
        if(data->position <= i/2)
        {
            while (b->head->value != data->biggest )
                rb(b);
            pa(a, b);
            
        }
        if(data->position > i/2)
        {
            while (b->head->value != data->biggest )
                rrb(b);
            pa(a, b);
            
        }
    }



}
