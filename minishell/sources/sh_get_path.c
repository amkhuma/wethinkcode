/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_path.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 10:27:51 by amkhuma           #+#    #+#             */
/*   Updated: 2017/08/30 14:31:06 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static	char		**split_path(char *path)
{
	char	**arr;

	arr = ft_strsplit(&path[5], ':');
	free(path);
	return (arr);
}

void				sh_cleaner(char **dir, char *n, char *tmp)
{
	int		i;

	i = 0;
	free(tmp);
	free(n);
	while (dir[i++])
		free(dir[i]);
	free(dir);
}

static	char		*sh_locate_path(char **path)
{
	int		i;

	i = 0;
	while (path[i] != '\0')
	{
		if (ft_strncmp(path[i], "PATH", 4) == 0)
			return (path[i]);
		i++;
	}
	return (NULL);
}

char				*sh_path(char **p, char **n)
{
	char	**dir;
	char	*d;
	char	*tmp;
	char	*p_t;
	int		i;

	if (access(*n, F_OK) == 0)
		return (*n);
	p_t = sh_locate_path(p);
	dir = split_path(p_t);
	i = 0;
	if (dir == NULL)
		return (NULL);
	while (dir[i++] != 0)
	{
		d = ft_strjoin(dir[i], "/");
		tmp = ft_strjoin(d, *n);
		free(d);
		d = tmp;
		if (access(d, F_OK) == 0)
			return (d);
	}
	sh_cleaner(dir, *n, tmp);
	return (NULL);
}
