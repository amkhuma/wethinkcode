/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 11:46:39 by amkhuma           #+#    #+#             */
/*   Updated: 2017/07/31 11:46:47 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while ((unsigned char)s1[i] && (unsigned char)s2[i] &&
			((unsigned char)s1[i] == (unsigned char)s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
