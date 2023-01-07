/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:15:24 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/19 20:15:27 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_rotate(t_list **lst)
{
	t_list	*tmp;

	if (ft_lstsize(*lst) <= 1)
	{
		ft_putstr_fd("Redundant", 2);
		return ;
	}
	tmp = *lst;
	ft_lstlast(*lst)->next = *lst;
	*lst = (*lst)->next;
	tmp->next = 0;
}

void	ps_ra(t_list **lst_a, t_list **lst_b)
{
	ft_rotate(lst_a);
	(void)lst_b;
}

void	ps_rb(t_list **lst_a, t_list **lst_b)
{
	(void)lst_a;
	ft_rotate(lst_b);
}

void	ps_rr(t_list **lst_a, t_list **lst_b)
{
	ft_rotate(lst_a);
	ft_rotate(lst_b);
}
