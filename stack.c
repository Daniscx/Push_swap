/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 21:14:03 by dmaestro          #+#    #+#             */
/*   Updated: 2025/03/01 14:06:11 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
node_t	*ft_nodelast(node_t *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
void	ft_nodeadd_front(stach_t *lst, node_t *new)
{
	stach_t *a;
	a = lst;
	if (!lst || !new)
		return ;
	if (!lst->head)
	{
		lst->head = new;
		new->next = NULL;
		return ;
	}

	new->next = a->head;
	a->head = new;
}
void	ft_nodeadd_back(stach_t *lst, node_t *new)
{
	node_t	*nem;
	stach_t *a;
	
	a = lst;
	if (!lst || !new)
		return ;
	if (!lst->head)
	{
		lst->head = new;
		return ;
	}
	nem = a->head;
	while (nem->next != NULL)
		nem = nem->next;
	nem->next = new;
	new->next = NULL;
}

node_t	*ft_nodenew(int value)
{
	node_t	*newnod;

	newnod = (node_t *)malloc(sizeof(node_t));
	if (!newnod)
		return (NULL);
	newnod->value = value;
	newnod->position = 0;
	return (newnod);
}
int	ft_stacksize(node_t *lst)
{
	int	i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}