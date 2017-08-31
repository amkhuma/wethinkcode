/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 11:38:05 by amkhuma           #+#    #+#             */
/*   Updated: 2017/08/29 17:46:56 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static	void	print_special_char(char c)
{
	if (c == 'n')
		write(1, "\n", 1);
	else if (c == 't')
		write(1, "\t", 1);
	else if (c == 'v')
		write(1, "\v", 1);
	else if (c == 'r')
		write(1, "\r", 1);
	else if (c == 'f')
		write(1, "\f", 1);
	else if (c == 'a')
		write(1, "\a", 1);
	else if (c == 'b')
		write(1, "\b", 1);
	else if (c == '\"')
		write(1, "\"", 1);
}

static	void	print_echo(char *str)
{
	int	i;
	int	quo;

	i = 0;
	quo = (str[i] == '\"') ? 1 : 0;
	i += (str[i] == '\"');
	while (str[i] != '\0')
	{
		if (str[i] == '\\' && str[i + 1] != '\0')
		{
			if (str[i + 1] == '\\')
				i++;
			if (quo == 1)
				print_special_char(str[i + 1]);
			i += (quo == 1) ? 2 : 1;
			continue;
		}
		if (str[i] != '\"')
			ft_putchar(str[i]);
		i++;
	}
}

int				sh_echo(char **argv)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (ft_strcmp(argv[i], "echo") == 0)
		i++;
	if (argv[i] && ft_strcmp(argv[i], "-n") == 0)
		n = i++;
	while (argv[i] && argv[i] != NULL)
	{
		print_echo(argv[i]);
		if (argv[i + 1] != NULL)
			write(1, " ", 1);
		i++;
	}
	if (n == 0)
		write(1, "\n", 1);
	return (1);
}
