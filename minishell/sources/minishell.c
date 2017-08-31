/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 08:08:48 by amkhuma           #+#    #+#             */
/*   Updated: 2017/08/30 14:23:35 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	free_2d_array(char **array)
{
	int		count;

	count = 0;
	while (array[count])
	{
		ft_strdel(&array[count]);
		array[count] = NULL;
		count++;
	}
	free(array);
	array = NULL;
}

int		main(int argc, char **argv, char **env)
{
	t_data		db;
	char		*line;
	char		**arg;

	argv = NULL;
	argc = 1;
	ft_env_loop(env, &db);
	ft_putstr("\t\t\t\033[0m\033[33m ELIDNA'S MINISHELL!!\n");
	while (argc)
	{
		ft_putstr(" \033[31mデ");
		ft_putstr("\033[0m\033[35m$\033[0m> ");
		if (get_next_line(0, &line) < 0)
			ft_putstr("error");
		arg = ft_strsplit(line, ' ');
		ft_strdel(&line);
		argc = sh_execute(arg, &db);
		line = NULL;
		free_2d_array(arg);
	}
	return (0);
}
