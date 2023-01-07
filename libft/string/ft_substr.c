/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:57:17 by hqixeo            #+#    #+#             */
/*   Updated: 2022/07/08 19:57:19 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(const char *str, unsigned int home, size_t len)
{
	char	*substr;
	size_t	str_len;

	if (!str)
		return (0);
	else if (home >= ft_strlen(str))
		return (ft_strdup(""));
	str += home;
	str_len = ft_strlen(str);
	if (str_len < len)
		len = str_len;
	substr = malloc(len + 1);
	if (!substr)
		return (0);
	substr[len] = 0;
	while (len--)
		substr[len] = str[len];
	return (substr);
}
