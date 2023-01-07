/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:17:05 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/19 20:17:06 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/include/libft.h"
# include "ps_operator.h"

typedef struct value
{
	int	nbr;
	int	order;
}			t_value;

typedef struct move
{
	int			cost;
	t_operator	ps_op;
}			t_move;

typedef struct act
{
	int		cost;
	t_move	primary;
	t_move	secondary;
}			t_act;

typedef struct cost
{
	int	ra;
	int	rra;
	int	rb;
	int	rrb;
	int	greed;
	int	overlay_r;
	int	overlay_rr;
	int	idealism;
}			t_cost;

t_list	*ft_splittolst(const char *str);
t_list	*ft_aatostack(char **strlist);
//Utils
int		ft_get_nbr(t_value *value);
int		ft_get_order(t_value *value);
int		ft_smaller(t_list *node1, t_list *than_node2);
int		ft_larger(t_list *node1, t_list *than_node2);
int		ft_sorted(t_list *lst);

//Push
void	push_divide(t_list **lst_a, t_list **lst_b);
void	push_recursive_section(t_list **lst_a, t_list **lst_b);

//Error&Debug
void	ft_errprintf(int exitnbr, const char *str, ...);
int		ft_strisnumeric(const char *str);
t_list	*ft_duplicate_err(t_list *lst, t_list *newnode);
void	ft_dprintlst(int fd, t_list *lst_a, t_list *lst_b);

//algo
t_cost	ft_greedy_search(t_list *lst_a, t_list *lst_b);
void	sort_insertion(t_list **lst_a, t_list **lst_b);
void	sort_greedy_insertion(t_list **lst_a, t_list **lst_b);
#endif
