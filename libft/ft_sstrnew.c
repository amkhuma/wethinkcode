/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 11:44:03 by amkhuma           #+#    #+#             */
/*   Updated: 2017/09/08 12:09:46 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_sstrnew(size_t size)
{
	char	**s;
	size_t	i;

	i = 0;
	if (!(s = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	while (i < (size))
		s[i++] = NULL;
	s[i] = NULL;
	return (s);
}
