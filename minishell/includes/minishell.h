/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:14:49 by amkhuma           #+#    #+#             */
/*   Updated: 2017/09/10 12:14:51 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# define BUFF_SIZE 	1000

# include "../libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/uio.h>
# include <sys/wait.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <signal.h>
# include <dirent.h>

typedef struct		s_data
{
	char			**g_env;
}					t_data;

int					sh_execute(char **args, t_data *p);
int					sh_cd(char **args, char **env);
int					sh_exit(char **args);
int					sh_clear(void);
int					ft_env(char **env);
int					ft_env_loop(char **env, t_data *p);
int					sh_launch(char **args, char **envp);
int					sh_echo(char **argv, t_data *p);
void				clean_up(char **dir, char *n, char *tmp);
char				*sh_realloc(char *str);
int					ft_unsetenv(char **env, char *str);
char				*ft_path_finder(char **p, char **n);
void				sh_cleaner(char **dir, char *n, char *tmp);
char				*sh_path(char **p, char **n);
char				*get_env_var(char *variable, char **env);

int					get_next_line(int const fd, char **line);
void				sh_increase_array(char *str, t_data *p);
void				ft_delarray(char **array);
char				**ft_arraydup(char **env);
int					sh_setenv(char *arg, t_data *p);
char				**ft_sstrnew(size_t size);
int					ft_sstrlen(char **s);
char				**ft_split(char *str);

#endif
