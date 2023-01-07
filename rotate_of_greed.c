/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_of_greed.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:15:43 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/19 20:15:46 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static t_act	act_overlay(t_move ps_a, t_move ps_b, t_operator ps_ab)
{
	t_act	act;

	act.primary.ps_op = ps_ab;
	if (ps_a.cost > ps_b.cost)
	{
		act.cost = ps_a.cost;
		act.primary.cost = ps_b.cost;
		act.secondary = (t_move){ps_a.cost - ps_b.cost, ps_a.ps_op};
	}
	else
	{
		act.cost = ps_b.cost;
		act.primary.cost = ps_a.cost;
		act.secondary = (t_move){ps_b.cost - ps_a.cost, ps_b.ps_op};
	}
	return (act);
}

static t_act	act_greed(t_move ra, t_move rra, t_move rb, t_move rrb)
{
	t_act	act;

	if (ra.cost <= rra.cost)
		act.primary = ra;
	else
		act.primary = rra;
	if (rb.cost <= rrb.cost)
		act.secondary = rb;
	else
		act.secondary = rrb;
	act.cost = act.primary.cost + act.secondary.cost;
	return (act);
}

static void	ps_action(t_list **lst_a, t_list **lst_b, t_cost cost)
{
	t_act	min;
	t_move	ra;
	t_move	rb;
	t_move	rra;
	t_move	rrb;

	ra = (t_move){cost.ra, ps_ra};
	rb = (t_move){cost.rb, ps_rb};
	rra = (t_move){cost.rra, ps_rra};
	rrb = (t_move){cost.rrb, ps_rrb};
	min = act_greed(ra, rra, rb, rrb);
	if (min.cost > cost.overlay_r)
		min = act_overlay(ra, rb, ps_rr);
	if (min.cost > cost.overlay_rr)
		min = act_overlay(rra, rrb, ps_rrr);
	ps_repeat(min.primary.ps_op, lst_a, lst_b, min.primary.cost);
	ps_repeat(min.secondary.ps_op, lst_a, lst_b, min.secondary.cost);
}

void	sort_greedy_insertion(t_list **lst_a, t_list **lst_b)
{
	push_recursive_section(lst_a, lst_b);
	while (*lst_b)
	{
		ps_action(lst_a, lst_b, ft_greedy_search(*lst_a, *lst_b));
		ps_operate(ps_pa, lst_a, lst_b);
	}
	ps_cheaprotate(lst_a, lst_b,
		ft_lstsize(*lst_a) - ft_get_order((*lst_a)->content), 'a');
}
