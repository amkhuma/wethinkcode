/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 14:58:48 by amkhuma           #+#    #+#             */
/*   Updated: 2017/08/21 18:24:54 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		sh_execute(char **args, t_data *db)
{
	if (ft_strcmp("cd", args[0]) == 0)
		return (sh_cd(args));
	else if (ft_strcmp("exit", args[0]) == 0)
		return (sh_exit(args));
	else if (ft_strcmp("clear", args[0]) == 0)
		return (sh_clear());
	else if (ft_strcmp("env", args[0]) == 0)
		ft_env(db->gg_env);
	else if (ft_strcmp("echo", args[0]) == 0)
		return (sh_echo(args));
	else if (ft_strcmp("setenv", args[0]) == 0)
		sh_setenv(args[1], db->gg_env);
	else if (ft_strcmp("unsetenv", args[0]) == 0)
		ft_unsetenv(db->gg_env, args[1]);
	else
		sh_launch(args, db->gg_env);
	return (-1);
}