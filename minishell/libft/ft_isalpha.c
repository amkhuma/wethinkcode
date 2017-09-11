/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 11:43:02 by amkhuma           #+#    #+#             */
/*   Updated: 2017/06/18 12:55:49 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	if (((c <= 'Z') && (c >= 'A')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	else
		return (0);
}