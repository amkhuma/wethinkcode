/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 11:38:13 by amkhuma           #+#    #+#             */
/*   Updated: 2017/08/30 14:26:48 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_env(char **env)
{
	while (*env != NULL)
	{
		ft_str(*env);
		write(1, "\n", 1);
		env++;
	}
	return (1);
}

int		ft_env_loop(char **env, t_data *db)
{
	int i;

	i = 0;
	while (env[i])
		i++;
	db->gg_env = (char **)malloc(sizeof(char *) * (i + 1));
	i = 0;
	while (env[i])
	{
		db->gg_env[i] = ft_strdup(env[i]);
		i++;
	}
	db->gg_env[i] = NULL;
	return (1);
}
