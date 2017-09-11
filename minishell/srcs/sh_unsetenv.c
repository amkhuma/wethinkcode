/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:14:16 by amkhuma           #+#    #+#             */
/*   Updated: 2017/09/10 12:14:18 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int		ft_unsetenv(char **env, char *str)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	if (str == NULL)
	{
		ft_putstr("unsetenv: expected argument to unset.\n");
		return (1);
	}
	while (env[nbr])
		nbr++;
	while (env[i])
	{
		if (ft_strncmp(env[i], str, ft_strlen(str) - 1) == 0)
		{
			while (i < nbr - 1)
			{
				env[i] = sh_realloc(env[i + 1]);
				i++;
			}
			if (env[i] != NULL)
				env[i] = sh_realloc(NULL);
		}
		i++;
	}
	return (1);
}
