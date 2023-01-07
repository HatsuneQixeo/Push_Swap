/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:15:07 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/19 20:15:09 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static t_value	*ft_newvalue(int nbr)
{
	t_value	*value;

	value = malloc(sizeof(t_value));
	value->nbr = nbr;
	value->order = 0;
	return (value);
}

static void	ft_valueorder(t_list *lst, int order)
{
	t_list	*largest;

	while (ft_get_order(lst->content))
		lst = lst->next;
	largest = lst;
	while (lst)
	{
		if (!ft_get_order(lst->content) && ft_larger(lst, largest))
			largest = lst;
		lst = lst->next;
	}
	((t_value *)largest->content)->order = order;
}

static void	ft_lstorder(t_list *lst)
{
	int	order;

	order = ft_lstsize(lst);
	if (order)
		while (--order)
			ft_valueorder(lst, order);
}

t_list	*ft_aatostack(char **strlist)
{
	t_list	*lst;
	long	nb;

	lst = 0;
	while (*strlist)
	{
		if (!ft_strisnumeric(*strlist))
			ft_errprintf(1, "Unknown value: %s", *strlist);
		nb = ft_atol(*strlist++);
		if (nb < -2147483648 || nb > 2147483647)
			ft_errprintf(1, "Value is not within integer: %s", *--strlist);
		ft_lstadd_back(&lst, ft_duplicate_err(lst, ft_lstnew(ft_newvalue(nb))));
	}
	ft_lstorder(lst);
	return (lst);
}

t_list	*ft_splittolst(const char *str)
{
	t_list	*lst;
	char	**strlist;

	strlist = ft_split(str, ' ');
	lst = ft_aatostack(strlist);
	ft_clear_strlist(strlist);
	return (lst);
}
