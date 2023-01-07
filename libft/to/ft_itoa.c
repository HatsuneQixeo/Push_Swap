/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 21:30:57 by hqixeo            #+#    #+#             */
/*   Updated: 2022/07/08 21:30:59 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	digit_count(int nb)
{
	int	digit;

	digit = 1;
	while (nb / 10)
	{
		nb /= 10;
		digit++;
	}
	return (digit);
}

static char	*itoa_assign(char *str, size_t array, unsigned int un_n)
{
	str[array] = 0;
	while (array--)
	{
		str[array] = (un_n % 10) + '0';
		un_n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			array;
	int				sign;
	unsigned int	un_n;

	sign = 0;
	if (n < 0)
	{
		sign++;
		un_n = -n;
	}
	else
		un_n = n;
	array = digit_count(n) + sign;
	str = malloc(array + 1);
	if (!str)
		return (0);
	str = itoa_assign(str, array, un_n);
	if (sign)
		str[0] = '-';
	return (str);
}
