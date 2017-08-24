/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 17:34:19 by amkhuma           #+#    #+#             */
/*   Updated: 2017/08/21 17:59:04 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

size_t	ft_strlen(const char *s)
{
	int		count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

void	ft_putstr(const char *s)
{
	write(1, s, ft_strlen(s));
}
