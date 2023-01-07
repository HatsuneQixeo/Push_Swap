/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:23:47 by hqixeo            #+#    #+#             */
/*   Updated: 2022/09/04 14:23:48 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	digit_count(uintptr_t un_n, int len_base)
{
	int	digit;

	digit = 1;
	while (un_n / len_base)
	{
		un_n /= len_base;
		digit++;
	}
	return (digit);
}

static int	duplicate(char *base)
{
	while (*base)
	{
		if (ft_strchr(base + 1, *base))
			return (1);
		base++;
	}
	return (0);
}

char	*ft_utoa_base(uintptr_t un_n, char *base)
{
	char			*str;
	size_t			array;
	size_t			len_base;

	len_base = ft_strlen(base);
	array = digit_count(un_n, len_base);
	if (duplicate(base))
		return (0);
	str = malloc(array + 1);
	if (!str)
		return (0);
	str[array] = 0;
	while (array--)
	{
		str[array] = base[un_n % len_base];
		un_n /= len_base;
	}
	return (str);
}
