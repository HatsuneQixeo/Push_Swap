/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_abandoned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:14:46 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/19 20:14:48 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static int	ft_findorder(t_list *lst, int order)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst && ft_get_order(lst->content) != order)
	{
		i++;
		lst = lst->next;
	}
	if (!lst)
		return (!ft_dprintf(2, "Error\nDid not find matching order: %d\n",
				order));
	return (i);
}

void	sort_selection(t_list **lst_a, t_list **lst_b)
{
	int	order;

	order = 0;
	while (*lst_a)
	{
		ps_cheaprotate(lst_a, lst_b, ft_findorder(*lst_a, order++), 'a');
		ps_pb(lst_a, lst_b);
	}
	ps_repeat(ps_pa, lst_a, lst_b, ft_lstsize(*lst_b));
}
