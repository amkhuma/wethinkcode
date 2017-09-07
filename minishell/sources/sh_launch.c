/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_launch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 14:57:42 by amkhuma           #+#    #+#             */
/*   Updated: 2017/09/07 09:58:12 by amkhuma          ###   ########.fr       */
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
		if (tmp == NULL)
			exit(0);
		execve(tmp, args, envp);
		free(tmp);
	}
	else
	{
		waitpid(pid, &status, WUNTRACED);
		while (!WIFEXITED(status) && !WIFSIGNALED(status))
			waitpid(pid, &status, WUNTRACED);
	}
	return (1);
}
