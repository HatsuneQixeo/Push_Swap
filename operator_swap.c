/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:15:32 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/19 20:15:34 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_swapptr(void *ptr1, void *ptr2)
{
	char	**cptr1;
	char	**cptr2;
	char	*tmp;

	cptr1 = ptr1;
	cptr2 = ptr2;
	tmp = *cptr1;
	*cptr1 = *cptr2;
	*cptr2 = tmp;
}

static void	ft_swapstack(t_list **lst)
{
	if (*lst && (*lst)->next)
		ft_swapptr((*lst)->content, (*lst)->next->content);
	else
		ft_putstr_fd("Invalid", 2);
}

void	ps_sa(t_list **lst_a, t_list **lst_b)
{
	ft_swapstack(lst_a);
	(void)lst_b;
}

void	ps_sb(t_list **lst_a, t_list **lst_b)
{
	(void)lst_a;
	ft_swapstack(lst_b);
}

void	ps_ss(t_list **lst_a, t_list **lst_b)
{
	ft_swapstack(lst_a);
	ft_swapstack(lst_b);
}
