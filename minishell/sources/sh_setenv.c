/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 11:40:03 by amkhuma           #+#    #+#             */
/*   Updated: 2017/08/21 18:29:38 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		sh_findpoint(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (str[i] == c)
		return (i);
	return (-1);
}

void	sh_setenv(char *arg, char **env)
{
	int		i;

	i = 0;
	if (arg == NULL)
	{
		ft_putstr("expected variable to set.\n");
	}
	else 
	{
		while (env[i])
		{
			if (ft_strncmp(arg, env[i], sh_findpoint(arg, '=')) == 0)
			{
				env[i] = sh_realloc(env[i], arg);
				return ;
			}
			i++;
		}
		while (env[i] != NULL)
			i++;
		env[i] = sh_realloc(env[i], arg);
	}
}