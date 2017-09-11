/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:11:50 by amkhuma           #+#    #+#             */
/*   Updated: 2017/09/10 12:11:53 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int		sh_execute(char **args, t_data *p)
{
	if (args[0] == NULL)
		return (1);
	else if (ft_strcmp("cd", args[0]) == 0)
		return (sh_cd(args, p->g_env));
	else if (ft_strcmp("exit", args[0]) == 0)
		return (EXIT_SUCCESS);
	else if (ft_strcmp("clear", args[0]) == 0)
		return (sh_clear());
	else if (ft_strcmp("env", args[0]) == 0)
		return (ft_env(p->g_env));
	else if (ft_strcmp("echo", args[0]) == 0)
		return (sh_echo(args, p));
	else if (ft_strcmp("setenv", args[0]) == 0)
		return(sh_setenv(args[1], p));
	else if (ft_strcmp("unsetenv", args[0]) == 0)
		return(ft_unsetenv(p->g_env, args[1]));
	return (sh_launch(args, p->g_env));
}
