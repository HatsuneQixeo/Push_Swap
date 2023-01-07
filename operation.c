/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:15:17 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/19 20:15:18 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "ps_operator.h"

void	ps_operate(t_operator operation, t_list **lst_a, t_list **lst_b)
{
	operation(lst_a, lst_b);
	if (operation == ps_sa)
		ft_putendl_fd("sa", 1);
	else if (operation == ps_sb)
		ft_putendl_fd("sb", 1);
	else if (operation == ps_ss)
		ft_putendl_fd("ss", 1);
	else if (operation == ps_pa)
		ft_putendl_fd("pa", 1);
	else if (operation == ps_pb)
		ft_putendl_fd("pb", 1);
	else if (operation == ps_ra)
		ft_putendl_fd("ra", 1);
	else if (operation == ps_rb)
		ft_putendl_fd("rb", 1);
	else if (operation == ps_rr)
		ft_putendl_fd("rr", 1);
	else if (operation == ps_rra)
		ft_putendl_fd("rra", 1);
	else if (operation == ps_rrb)
		ft_putendl_fd("rrb", 1);
	else if (operation == ps_rrr)
		ft_putendl_fd("rrr", 1);
}

void	ps_repeat(t_operator ps, t_list **lst_a, t_list **lst_b, int repeat)
{
	if (repeat < 0)
		ft_putendl_fd("Negative repeat", 2);
	else
		while (repeat--)
			ps_operate(ps, lst_a, lst_b);
}

void	ps_cheaprotate(t_list **lst_a, t_list **lst_b, int rotate, char stack)
{
	int	size;

	if (stack == 'a')
	{
		size = ft_lstsize(*lst_a);
		if (rotate > size / 2)
			ps_repeat(ps_rra, lst_a, lst_b, size - rotate);
		else
			ps_repeat(ps_ra, lst_a, lst_b, rotate);
	}
	else if (stack == 'b')
	{
		size = ft_lstsize(*lst_b);
		if (rotate > size / 2)
			ps_repeat(ps_rrb, lst_a, lst_b, size - rotate);
		else
			ps_repeat(ps_rb, lst_a, lst_b, rotate);
	}
	else
		ft_dprintf(2, "Unknown stack: %c\n", stack);
}
