/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_rrotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:15:29 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/19 20:15:31 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_reverse_rotate(t_list **lst)
{
	t_list	*tmp;
	int		size;

	size = ft_lstsize(*lst);
	if (size <= 1)
	{
		ft_putstr_fd("Redundant", 2);
		return ;
	}
	tmp = ft_lstselect(*lst, size - 2);
	tmp->next->next = *lst;
	*lst = tmp->next;
	tmp->next = 0;
}

void	ps_rra(t_list **lst_a, t_list **lst_b)
{
	ft_reverse_rotate(lst_a);
	(void)lst_b;
}

void	ps_rrb(t_list **lst_a, t_list **lst_b)
{
	(void)lst_a;
	ft_reverse_rotate(lst_b);
}

void	ps_rrr(t_list **lst_a, t_list **lst_b)
{
	ft_reverse_rotate(lst_a);
	ft_reverse_rotate(lst_b);
}
