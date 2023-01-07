/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:15:39 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/19 20:15:42 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static int	ft_section_find(t_list *lst, int min, int max)
{
	int	i;

	i = 0;
	while (lst)
	{
		if (ft_within(min, ft_get_order(lst->content), max))
			return (i);
		i++;
		lst = lst->next;
	}
	return (-1);
}

static void	push_recursive_size(t_list **lst_a, t_list **lst_b, int divide)
{
	int	size;
	int	toward;

	size = ft_lstsize(*lst_a);
	if (divide > 2)
		push_recursive_size(lst_a, lst_b, divide - divide / 2);
	toward = ft_section_find(*lst_a, size / divide, size / (divide / 2));
	while (toward >= 0)
	{
		ps_cheaprotate(lst_a, lst_b, toward, 'a');
		ps_operate(ps_pb, lst_a, lst_b);
		toward = ft_section_find(*lst_a, size / divide, size / (divide / 2));
	}
}

void	push_recursive_section(t_list **lst_a, t_list **lst_b)
{
	push_recursive_size(lst_a, lst_b, ft_lstsize(*lst_a));
}

void	push_division(t_list **lst_a, t_list **lst_b)
{
	int	toward;
	int	size;
	int	partition;
	int	i;

	i = 0;
	size = ft_lstsize(*lst_a);
	partition = size / 2;
	while (*lst_a)
	{
		size = i + partition;
		toward = ft_section_find(*lst_a, i, size);
		while (toward >= 0)
		{
			ps_cheaprotate(lst_a, lst_b, toward, 'a');
			ps_operate(ps_pb, lst_a, lst_b);
			toward = ft_section_find(*lst_a, i, size);
		}
		i += partition;
		partition = partition - partition / 2;
	}
}

void	push_divide(t_list **lst_a, t_list **lst_b)
{
	int	size;

	size = ft_lstsize(*lst_a);
	while (*lst_a)
	{
		ps_operate(ps_pb, lst_a, lst_b);
		if (*lst_a && ft_get_order((*lst_a)->content) < size / 4
			&& ft_get_order((*lst_b)->content) < size / 2)
			ps_operate(ps_rr, lst_a, lst_b);
		else if (ft_get_order((*lst_b)->content) < size / 2)
			ps_operate(ps_rb, lst_a, lst_b);
	}
}
