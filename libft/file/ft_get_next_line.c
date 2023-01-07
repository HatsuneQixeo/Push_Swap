/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:41:10 by hqixeo            #+#    #+#             */
/*   Updated: 2022/07/26 19:41:12 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

static char	*read_line(int fd, char *str_saved)
{
	char	*str_part;
	int		len;

	str_part = malloc(BUFFER_SIZE + 1);
	while (!ft_strchr(str_saved, '\n'))
	{
		len = read(fd, str_part, BUFFER_SIZE);
		if (len <= 0)
		{
			if (len < 0)
				ft_dprintf(2, "get_next_line error: read returned -1\n");
			break ;
		}
		str_part[len] = 0;
		str_saved = ft_strmodify(str_saved, str_part, ft_strjoin);
	}
	free(str_part);
	return (str_saved);
}

static char	*separator(char **str_saved)
{
	char	*str_main;
	char	*nl;
	char	*tmp;

	str_main = 0;
	nl = ft_strchr(*str_saved, '\n');
	if (**str_saved && nl)
		str_main = ft_substr(*str_saved, 0, ++nl - *str_saved);
	else if (**str_saved)
		str_main = ft_strdup(*str_saved);
	tmp = ft_strdup(nl);
	free(*str_saved);
	*str_saved = tmp;
	return (str_main);
}

char	*get_next_line(int fd)
{
	static char	*str_saved[1024];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= 1024)
		return (0);
	if (!str_saved[fd])
		str_saved[fd] = ft_strdup("");
	str_saved[fd] = read_line(fd, str_saved[fd]);
	return (separator(&str_saved[fd]));
}
