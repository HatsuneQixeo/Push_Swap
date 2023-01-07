/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:02:47 by hqixeo            #+#    #+#             */
/*   Updated: 2022/07/05 15:02:49 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t bytes)
{
	char	*ucdst;
	char	*ucsrc;

	ucdst = (char *)dst;
	ucsrc = (char *)src;
	if (src && dst)
		while (bytes--)
			*ucdst++ = *ucsrc++;
	return (dst);
}
