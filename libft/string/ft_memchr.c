/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:32:24 by hqixeo            #+#    #+#             */
/*   Updated: 2022/07/06 14:34:49 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t bytes)
{
	char	*ucstr;
	char	uc;

	ucstr = (char *)str;
	uc = c;
	if (str)
		while (bytes--)
			if (*ucstr++ == uc)
				return ((void *)--ucstr);
	return (0);
}
