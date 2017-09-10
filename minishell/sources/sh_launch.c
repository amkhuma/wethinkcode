/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_launch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:13:35 by amkhuma           #+#    #+#             */
/*   Updated: 2017/09/10 12:13:37 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		sh_launch(char **args, char **envp)
{
	pid_t		pid;
	int			status;
	char		*tmp;

	pid = fork();
	if (pid == 0)
	{
		tmp = sh_path(envp, args);
		execve(tmp, args, envp);
		ft_putstr("zsh: command not found: ");
		ft_putstr("\x1b[31m");
		ft_putstr(args[0]);
		ft_putstr("\n");
		free(tmp);
		exit(0);
	}
	else
		waitpid(pid, &status, WUNTRACED);
	return (1);
}
