/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:15:47 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/19 20:15:49 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_get_nbr(t_value *value)
{
	return (value->nbr);
}

int	ft_get_order(t_value *value)
{
	return (value->order);
}

int	ft_smaller(t_list *node1, t_list *than_node2)
{
	if (!node1 || !than_node2)
		return (0);
	return (ft_get_nbr(node1->content) < ft_get_nbr(than_node2->content));
}

int	ft_larger(t_list *node1, t_list *than_node2)
{
	if (!node1 || !than_node2)
		return (0);
	return (ft_get_nbr(node1->content) > ft_get_nbr(than_node2->content));
}

int	ft_sorted(t_list *lst)
{
	if (!lst)
		return (1);
	while (ft_smaller(lst, lst->next))
		lst = lst->next;
	return (!lst->next);
}
