/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operator.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:17:02 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/19 20:17:03 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_OPERATOR_H
# define PS_OPERATOR_H

void	ps_sa(t_list **lst_a, t_list **lst_b);
void	ps_sb(t_list **lst_a, t_list **lst_b);
void	ps_ss(t_list **lst_a, t_list **lst_b);

void	ps_pa(t_list **lst_a, t_list **lst_b);
void	ps_pb(t_list **lst_a, t_list **lst_b);

void	ps_ra(t_list **lst_a, t_list **lst_b);
void	ps_rb(t_list **lst_a, t_list **lst_b);
void	ps_rr(t_list **lst_a, t_list **lst_b);

void	ps_rra(t_list **lst_a, t_list **lst_b);
void	ps_rrb(t_list **lst_a, t_list **lst_b);
void	ps_rrr(t_list **lst_a, t_list **lst_b);

typedef void	(*t_operator)(t_list **lst_a, t_list **lst_b);

void	ps_operate(t_operator operation, t_list **lst_a, t_list **lst_b);
void	ps_repeat(t_operator ps, t_list **lst_a, t_list **lst_b, int repeat);
void	ps_cheaprotate(t_list **lst_a, t_list **lst_b, int rotate, char stack);
#endif
