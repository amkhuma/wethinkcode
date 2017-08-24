/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 08:08:48 by amkhuma           #+#    #+#             */
/*   Updated: 2017/08/21 18:10:03 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		main(int argc, char **argv, char **env)
{
	t_data		db;
	char		*line;

	argc = 1;
	ft_env_loop(env, &db);
	ft_putstr("\t\t\t\033[0m\033[33m ELIDNA'S MINISHELL!!\n");
	while (argc)
	{
		ft_putstr(" \033[31m︻\033[0m\033[32m┳\033[0m\033[33mデ");
		ft_putstr("\033[0m\033[34m═\033[0m\033[35m—\033[0m$ ");
		if (get_next_line(0, &line) < 0)
			ft_putstr("error");
		argv = ft_strsplit(line, ' ');
		argc = sh_execute(argv, &db);
		free(line);
		free(argv);
	}
	return (0);
}
