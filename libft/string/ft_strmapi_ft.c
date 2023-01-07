/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapi_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:18:06 by hqixeo            #+#    #+#             */
/*   Updated: 2022/09/12 19:18:13 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* I'm definitely doing something with this value, I promise!*/
void	*ft_void(void *ptr)
{
	(void) ptr;
	return (0);
}

char	ft_mapi_upper(unsigned int i, char c)
{
	(void) i;
	return (ft_toupper(c));
}

char	ft_mapi_lower(unsigned int i, char c)
{
	(void) i;
	return (ft_tolower(c));
}

char	ft_mapi_capitalize(unsigned int i, char c)
{
	static char	prev;

	if (!i || (prev && !ft_isspace(c)))
	{
		prev = 0;
		return (ft_toupper(c));
	}
	prev = ft_isspace(c);
	return (ft_tolower(c));
}

char	ft_mapi_miku(unsigned int i, char c)
{
	if (i == 0)
		return ('H');
	else if (i == 1)
		return ('a');
	else if (i == 2)
		return ('t');
	else if (i == 3)
		return ('s');
	else if (i == 4)
		return ('u');
	else if (i == 5)
		return ('n');
	else if (i == 6)
		return ('e');
	else if (i == 7)
		return (' ');
	else if (i == 8)
		return ('M');
	else if (i == 9)
		return ('i');
	else if (i == 10)
		return ('k');
	else if (i == 11)
		return ('u');
	return ((char)ft_void(&c));
}
