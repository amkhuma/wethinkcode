/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:11:36 by amkhuma           #+#    #+#             */
/*   Updated: 2017/09/10 12:11:38 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int		ft_env(char **env)
{
	while (*env != NULL)
	{
		ft_putstr(*env);
		write(1, "\n", 1);
		env++;
	}
	return (1);
}

int		ft_env_loop(char **env, t_data *p)
{
	int i;

	i = 0;
	while (env[i])
		i++;
	p->g_env = (char **)malloc(sizeof(char *) * (i + 1));
	i = 0;
	while (env[i])
	{
		p->g_env[i] = ft_strdup(env[i]);
		i++;
	}
	return (1);
}

char	*get_env_var(char *variable, char **env)
{
	int			len;
	int			i;

	i = 0;
	len = ft_strlen(variable);
	while (env[i])
	{
		if (ft_strncmp(variable, env[i], len) == 0)
			return (env[i] + len);
		i++;
	}
	return (NULL);
}