/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 08:59:38 by amkhuma           #+#    #+#             */
/*   Updated: 2017/08/21 18:25:07 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*sh_realloc(char *str, char *str2)
{
	char	*nstr;

	str = NULL;
	if (str2 == NULL)
		return (str);
	nstr = (char *)malloc(sizeof(char) * ft_strlen(str2));
	ft_strcpy(nstr, str2);
	return (nstr);
}
