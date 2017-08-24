/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 11:37:49 by amkhuma           #+#    #+#             */
/*   Updated: 2017/08/24 14:27:21 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		sh_cd(char **args)
{
	t_data db;

	if (args[1] == NULL || ft_strcmp("~", args[1]) == 0)
	{
		if (chdir(HOME) != 0)
			ft_putstr("an error occured\n");
	}
	else
	{
		if (chdir(db.o_pwd) != 0)
			ft_putstr("an error occured\n");
	}
	return (1);
}
