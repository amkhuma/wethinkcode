/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 11:38:05 by amkhuma           #+#    #+#             */
/*   Updated: 2017/08/21 18:17:27 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		sh_echo(char **args)
{
	int		ctr;

	ctr = 1;
	while (args[ctr])
	{
		ft_putstr(args[ctr]);
		ft_putstr(" ");
		ctr++;
	}
	ft_putstr("\n");
	return (1);
}
