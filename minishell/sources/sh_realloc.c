/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 08:59:38 by amkhuma           #+#    #+#             */
/*   Updated: 2017/09/05 15:52:56 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*sh_realloc(char *str)
{
	char	*nstr;

	if (str == NULL)
		return (NULL);
	nstr = (char *)malloc(sizeof(char) * ft_strlen(str));
	ft_strcpy(nstr, str);
	return (nstr);
}
