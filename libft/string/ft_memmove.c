/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:02:54 by hqixeo            #+#    #+#             */
/*   Updated: 2022/07/05 15:02:57 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t bytes)
{
	char	*ucsrc;
	char	*ucdst;

	ucsrc = (char *)src;
	ucdst = (char *)dst;
	if (!dst || !src)
		return (0);
	if (ucdst > ucsrc)
		while (bytes--)
			ucdst[bytes] = ucsrc[bytes];
	else if (ucdst < ucsrc)
		while (bytes--)
			*ucdst++ = *ucsrc++;
	return (dst);
}
