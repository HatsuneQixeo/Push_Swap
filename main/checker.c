/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:17:14 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/19 20:17:15 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

char	*ft_prompt(void)
{
	char	*input;

	ft_putstr_fd("Checker$> ", 1);
	input = ft_strmodify(get_next_line(0), "\n", ft_strtrim);
	//Incorect format
	ft_striteri(input, ft_iteri_lower);
	return (input);
}

int	ft_comfirm(char *yes_for)
{
	char	*input;
	int		reply;

	ft_printf("Are you sure you want to %s?\n", yes_for);
	ft_printf("Type (yes/y) to %s\n", yes_for);
	input = ft_prompt();
	reply = !ft_strcmp(input, "y") || !ft_strcmp(input, "yes");
	free(input);
	return (reply);
}

static int	ps_validoperation(t_list **lst_a, t_list **lst_b, char *str)
{
	if (!ft_strcmp(str, "sa"))
		ps_sa(lst_a, lst_b);
	else if (!ft_strcmp(str, "sb"))
		ps_sb(lst_a, lst_b);
	else if (!ft_strcmp(str, "ss"))
		ps_ss(lst_a, lst_b);
	else if (!ft_strcmp(str, "pa"))
		ps_pa(lst_a, lst_b);
	else if (!ft_strcmp(str, "pb"))
		ps_pb(lst_a, lst_b);
	else if (!ft_strcmp(str, "ra"))
		ps_ra(lst_a, lst_b);
	else if (!ft_strcmp(str, "rb"))
		ps_rb(lst_a, lst_b);
	else if (!ft_strcmp(str, "rr"))
		ps_rr(lst_a, lst_b);
	else if (!ft_strcmp(str, "rra"))
		ps_rra(lst_a, lst_b);
	else if (!ft_strcmp(str, "rrb"))
		ps_rrb(lst_a, lst_b);
	else if (!ft_strcmp(str, "rrr"))
		ps_rrr(lst_a, lst_b);
	else
		return (0);
	return (1);
}

static void	ft_checker(t_list **lst_a, t_list **lst_b)
{
	char	*str;

	ft_dprintlst(1, *lst_a, *lst_b);
	str = ft_prompt();
	while (str)
	{
		free(str);
		if (!ps_validoperation(lst_a, lst_b, str))
			ft_errprintf(2, "Unknown command: %s", str);
		ft_dprintlst(1, *lst_a, *lst_b);
		str = ft_prompt();
	}
}

int	main(int argc, char **argv)
{
	t_list	*lst_a;
	t_list	*lst_b;

	if (argc == 1)
		return (0);
	else if (argc == 2)
		lst_a = ft_splittolst(argv[1]);
	else
		lst_a = ft_aatostack(++argv);
	lst_b = 0;
	ft_checker(&lst_a, &lst_b);
	if (!lst_b && ft_sorted(lst_a))
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
}
