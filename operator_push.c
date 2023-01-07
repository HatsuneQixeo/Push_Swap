/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:15:20 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/19 20:15:22 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_push(t_list **lst_from, t_list **lst_to)
{
	t_list	*tmp;

	if (*lst_from)
	{
		tmp = (*lst_from)->next;
		ft_lstadd_front(lst_to, *lst_from);
		*lst_from = tmp;
	}
	else
		ft_putstr_fd("Invalid", 2);
}

void	ps_pb(t_list **lst_a, t_list **lst_b)
{
	ft_push(lst_a, lst_b);
}

void	ps_pa(t_list **lst_a, t_list **lst_b)
{
	ft_push(lst_b, lst_a);
}
