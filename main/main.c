/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:17:18 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/19 20:17:21 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

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
	if (ft_sorted(lst_a))
		return (0);
	else if (ft_lstsize(lst_a) <= 10)
		sort_insertion(&lst_a, &lst_b);
	else
		sort_greedy_insertion(&lst_a, &lst_b);
}
