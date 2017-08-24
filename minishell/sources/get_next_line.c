/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 11:43:45 by amkhuma           #+#    #+#             */
/*   Updated: 2017/08/22 08:29:43 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char			*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] && s)
	{
		if ((char)s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == s[i])
		return ((char *)s + i);
	return (NULL);
}

static int		ft_read_buffer(int const fd, char **line)
{
	char		*buff;
	int			ret;
	char		*tmp;

	if (!(buff = (char *)malloc(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	ret = read(fd, buff, BUFF_SIZE);
	if (ret > 0)
	{
		buff[ret] = '\0';
		tmp = ft_strjoin(*line, buff);
		free(*line);
		*line = tmp;
	}
	return (ret);
}

int				get_next_line(int const fd, char **line)
{
	static char		*str;
	char			*find_newl;
	int				ret;

	if ((!str && (str = (char *)malloc(sizeof(*str))) == NULL) || !line
			|| fd < 0 || BUFF_SIZE < 0)
		return (-1);
	find_newl = ft_strchr(str, '\n');
	while (find_newl == NULL)
	{
		ret = ft_read_buffer(fd, &str);
		if (ret == 0)
		{
			if (ft_strlen(str) == 0)
				return (0);
			str = ft_strjoin(str, "\n");
		}
		if (ret < 0)
			return (-1);
		else
			find_newl = ft_strchr(str, '\n');
	}
	*line = ft_strsub(str, 0, ft_strlen(str) - ft_strlen(find_newl));
	str = ft_strdup(find_newl + 1);
	return (1);
}
