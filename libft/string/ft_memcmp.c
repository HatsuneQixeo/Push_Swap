/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:34:54 by hqixeo            #+#    #+#             */
/*   Updated: 2022/07/06 14:34:57 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t bytes)
{
	unsigned char	*ucstr1;
	unsigned char	*ucstr2;

	ucstr1 = (unsigned char *)str1;
	ucstr2 = (unsigned char *)str2;
	if (!bytes || !str1 || !str2)
		return (0);
	while (*ucstr1 == *ucstr2 && --bytes)
	{
		ucstr1++;
		ucstr2++;
	}
	return (*ucstr1 - *ucstr2);
}
