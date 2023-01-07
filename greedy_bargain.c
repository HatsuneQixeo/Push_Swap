/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greedy_bargain.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:15:03 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/19 20:15:05 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static int	ft_cost_rotate(t_list *lst_a, t_list *lst_b)
{
	t_list	*last;
	int		rotate;

	rotate = 0;
	last = ft_lstlast(lst_a);
	while (lst_a && !(ft_smaller(lst_b, lst_a) && ft_larger(lst_b, last)))
	{
		rotate++;
		last = lst_a;
		lst_a = lst_a->next;
	}
	return (rotate);
}

static int	ft_cost_reset(t_list *lst)
{
	t_list	*smallest;
	int		i;
	int		cost;

	smallest = lst;
	i = 0;
	cost = 0;
	while (lst)
	{
		if (ft_smaller(lst, smallest))
		{
			cost = i;
			smallest = lst;
		}
		i++;
		lst = lst->next;
	}
	return (cost);
}

static int	ft_cost_insert(t_list *lst_a, t_list *lst_b, int size)
{
	int	rotate;

	rotate = ft_cost_rotate(lst_a, lst_b);
	if (rotate == size)
		return (ft_cost_reset(lst_a));
	return (rotate);
}

static t_cost	ft_costimbue(int ra, int size_a, int rb, int size_b)
{
	t_cost	cost;

	cost.ra = ra;
	cost.rb = rb;
	cost.rra = size_a - ra;
	cost.rrb = size_b - rb;
	cost.greed = ft_min(cost.ra, cost.rra) + ft_min(cost.rb, cost.rrb);
	cost.overlay_r = ft_max(cost.ra, cost.rb);
	cost.overlay_rr = ft_max(cost.rra, cost.rrb);
	cost.idealism = ft_min(ft_min(cost.overlay_r, cost.overlay_rr), cost.greed);
	return (cost);
}

t_cost	ft_greedy_search(t_list *lst_a, t_list *lst_b)
{
	t_cost	cost;
	t_cost	cost_iter;
	int		size_a;
	int		size_b;
	int		rb_c;

	rb_c = 0;
	size_a = ft_lstsize(lst_a);
	size_b = ft_lstsize(lst_b);
	cost = ft_costimbue(ft_cost_insert(lst_a, lst_b, size_a),
			size_a, rb_c++, size_b);
	if (cost.idealism <= 1)
		return (cost);
	lst_b = lst_b->next;
	while (lst_b)
	{
		cost_iter = ft_costimbue(ft_cost_insert(lst_a, lst_b, size_a),
				size_a, rb_c++, size_b);
		if (cost_iter.idealism < cost.idealism)
			cost = cost_iter;
		lst_b = lst_b->next;
	}
	return (cost);
}
