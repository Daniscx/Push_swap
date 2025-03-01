/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:19:18 by dmaestro          #+#    #+#             */
/*   Updated: 2025/03/01 12:17:40 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct  data_s
{
    int position;
    int biggest;
    int smallest;
} data_t;

typedef struct  node_s
{
    int value;
    int position;
    struct node_s *next;
} node_t;

typedef struct stach_s 
{
   node_t *head;

} stach_t; 

int	ft_stacksize(node_t *node);
node_t	*ft_nodelast(node_t *lst);
void	ft_nodeadd_front(stach_t *node, node_t *new);
void	ft_nodeadd_back(stach_t *lst, node_t *new);
node_t	*ft_nodenew(int value);
void    rb(stach_t *b);
void    ra(stach_t *a);
void    rr(stach_t *a, stach_t *b);
void    rra(stach_t *a);
void    rrb(stach_t *b);
void    rrr(stach_t *a, stach_t *b);
void    ss(stach_t *a, stach_t *b);
void    sa(stach_t *a);
void    sb(stach_t *b);
void pa(stach_t *a, stach_t *b);
void pb(stach_t *a, stach_t *b);
void take_the_data(data_t *data, stach_t *a);
void    ksort (stach_t *a, stach_t *b);
void    second_part(stach_t *a, stach_t *b, data_t *data);
int ft_sqroot(int lenth);
int array_arraylen(char **nb);
void checker2(stach_t *a);
int ft_checker(char **nb);
void checkpositions(stach_t *b);
#endif
