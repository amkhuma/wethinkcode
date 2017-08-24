/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 11:37:41 by amkhuma           #+#    #+#             */
/*   Updated: 2017/08/21 18:29:46 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void		ft_unsetenv(char **env, char *str)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (env[nbr])
		nbr++;
	while (env[i])
	{
		if (ft_strncmp(env[i], str, ft_strlen(str) - 1) == 0)
		{
			while (i < nbr - 1)
			{
				env[i] = sh_realloc(env[i], env[i + 1]);
				i++;
			}
			if (env[i] != NULL)
				env[i] = sh_realloc(env[i], NULL);
		}
		i++;
	}
}
