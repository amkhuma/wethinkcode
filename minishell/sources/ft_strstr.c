/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:07:45 by amkhuma           #+#    #+#             */
/*   Updated: 2017/09/10 12:07:48 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (little[k] != '\0')
		k++;
	if (k == 0)
		return ((char*)big);
	while (big[i])
	{
		while (little[j] == big[i + j])
		{
			if (j == k - 1)
				return ((char*)big + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
