/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 11:44:51 by amkhuma           #+#    #+#             */
/*   Updated: 2017/08/21 18:02:18 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		j;

	dst = (char*)malloc(sizeof(*dst) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dst)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
	{
		dst[i] = s1[j];
		j++;
		i++;
	}
	j = 0;
	while (s2[j])
	{
		dst[i] = s2[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
