/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:42:55 by dmaestro          #+#    #+#             */
/*   Updated: 2025/03/01 18:06:53 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_initial_portion(stach_t *a, int *nb);
int main(int args, char **argv)
{
    char **nb;
    int i;
    int *nba;
    stach_t *stack_a;
    stach_t *stack_b;
    node_t *aux;

    stack_a = NULL;
    stack_b = NULL;
    stack_a = (stach_t *)ft_caalloc(2, sizeof(stach_t));
    stack_b = (stach_t *)ft_caalloc(2, sizeof(stach_t));
    i = 0;
    if (args == 2)
        nb = ft_split(argv[1],' ');
    else
        nb = argv + 1;
    nba = (int *)malloc(array_arraylen(nb));
    ft_checker(nb);
    while(nb[i])
    {
        nba[i] = ft_atoi(nb[i]);
        i++;
    }
    ft_initial_portion(stack_a, nba);
    checkpositions(stack_a);
    ksort(stack_a, stack_b);
    aux = stack_a->head;
    while(aux != NULL)
    {
        ft_printf("%i\n",aux->value);
        aux = aux->next;
    }

}
int array_arraylen(char **nb)
{
    int i;

    i = 0;

    while(nb[i] !=  NULL)
        i++;

    return(i);
}
static void ft_initial_portion(stach_t *a, int *nb)
{
    
    int i;

    i = 0;
    while(nb[i])
    {
        ft_nodeadd_front(a, ft_nodenew(nb[i]));
        i++;
    }
    free(nb);
    checker2(a);
}