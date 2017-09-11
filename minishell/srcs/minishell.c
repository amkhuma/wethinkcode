/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:10:14 by amkhuma           #+#    #+#             */
/*   Updated: 2017/09/10 12:10:16 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_delarray(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		ft_strdel(&array[i]);
		i++;
	}
	free(array);
}

int		main(int argc, char **argv, char **env)
{
	t_data		p;
	char		*line;
	char		**arg;

	argv = NULL;
	argc = 1;
	ft_env_loop(env, &p);
	while (argc)
	{
		ft_putstr(" \033[31mデ");
		ft_putstr("\033[0m\033[35m$\033[0m> ");
		if (get_next_line(0, &line) < 0)
			ft_putstr("error");
		arg = ft_split(line);
		ft_strdel(&line);
		argc = sh_execute(arg, &p);
		line = NULL;
		ft_delarray(arg);
	}
	ft_delarray(p.g_env);
	return (0);
}
