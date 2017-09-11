/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:14:08 by amkhuma           #+#    #+#             */
/*   Updated: 2017/09/10 12:14:11 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int		sh_setenv(char *arg, t_data *p)
{
	if (arg == NULL)
		ft_putstr("setenv: expected argument to set.\n");
	else
		sh_increase_array(arg, p);
	return (1);
}
