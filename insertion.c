/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:15:12 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/19 20:15:13 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_list	*ft_lstnext(t_list *lst)
{
	if (!lst)
		return (0);
	return (lst->next);
}

static t_operator	op_insertion(int a_next, int a_last,
						int b_next, int b_last)
{
	if (a_next && a_last && b_next && b_last)
		return (ps_rr);
	else if (a_next && a_last)
		return (ps_ra);
	else if (b_next && b_last)
		return (ps_rb);
	else if (a_last && b_last)
		return (ps_rrr);
	else if (a_last)
		return (ps_rra);
	else if (b_last)
		return (ps_rrb);
	else if (a_next && b_next)
		return (ps_ss);
	else if (a_next)
		return (ps_sa);
	else if (b_next)
		return (ps_sb);
	else
		return (NULL);
}

void	sort_insertion(t_list **lst_a, t_list **lst_b)
{
	t_operator	ps;

	while (*lst_b || !ft_sorted(*lst_a))
	{
		ps = op_insertion
			(ft_larger(*lst_a, ft_lstnext(*lst_a)),
				ft_larger(*lst_a, ft_lstlast(*lst_a)),
				ft_smaller(*lst_b, ft_lstnext(*lst_b)),
				ft_smaller(*lst_b, ft_lstlast(*lst_b)));
		if (ps)
			ps_operate(ps, lst_a, lst_b);
		else if (!ft_sorted(*lst_a))
			ps_operate(ps_pb, lst_a, lst_b);
		else
			ps_operate(ps_pa, lst_a, lst_b);
	}
}
