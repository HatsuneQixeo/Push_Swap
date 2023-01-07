/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error__debug.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:14:51 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/19 20:14:51 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_errprintf(int exitnbr, const char *errmsg, ...)
{
	va_list	args;

	va_start(args, errmsg);
	ft_putstr_fd("Error\n", 2);
	// if (0)
		ft_printf_core(2, errmsg, args, ft_putendl_fd);
	exit(exitnbr);
}

int	ft_strisnumeric(const char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	if (!*str)
		return (0);
	while (ft_isdigit(*str))
		str++;
	return (!*str);
}

t_list	*ft_duplicate_err(t_list *lst, t_list *newnode)
{
	int	size;

	size = ft_lstsize(lst) + 1;
	while (ft_larger(lst, newnode) || ft_smaller(lst, newnode))
		lst = lst->next;
	if (lst)
		ft_errprintf(1,
			"Duplicated value: %d(argc: %d)(argc: %d)",
			ft_get_nbr(lst->content), size - ft_lstsize(lst), size);
	return (newnode);
}

static void	ft_dprint_lstnode(int fd, t_list **lst)
{
	if (!(*lst))
	{
		ft_dprintf(fd, "  (null)");
		return ;
	}
	ft_dprintf(fd, "%3d(%3d)",
		ft_get_nbr((*lst)->content), ft_get_order((*lst)->content));
	*lst = (*lst)->next;
}

void	ft_dprintlst(int fd, t_list *lst_a, t_list *lst_b)
{
	ft_printf("\n");
	while (lst_a || lst_b)
	{
		ft_dprint_lstnode(fd, &lst_a);
		ft_dprintf(fd, "  |");
		ft_dprint_lstnode(fd, &lst_b);
		ft_dprintf(fd, "\n");
	}
	ft_dprintf(fd, " (lst_a)  |  (lst_b) \n\n");
}
