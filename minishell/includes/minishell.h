/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 08:07:04 by amkhuma           #+#    #+#             */
/*   Updated: 2017/08/22 08:32:49 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# define HOME 		"/nfs/zfs-student-6/users/amkhuma"
# define BUFF_SIZE 	1000

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
	char			shell_var;
	char			**gg_env;
}					t_data;

int					sh_execute(char **args, t_data *db);
int					sh_cd(char **args);
int					sh_clear(void);
void				ft_str(char *str);
int					ft_env(char **env);
int					ft_env_loop(char **env, t_data *db);
int					sh_launch(char **args, char **envp);
int					sh_echo(char **argv, t_data *db);
void				clean_up(char **dir, char *n, char *tmp);
char				*sh_realloc(char *str);
void				ft_unsetenv(char **env, char *str);
int					sh_findpoint(char *str, char c);
void				sh_setenv(char *arg, char **env);
char				*ft_path_finder(char **p, char **n);
void				sh_cleaner(char **dir, char *n, char *tmp);
char				*sh_path(char **p, char **n);
char				*sh_getenv(char **env, const char *key);
void				free_2d_array(char **array);

char				**ft_strsplit(char const *s, char c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
int					get_next_line(int const fd, char **line);
char				*ft_strdup(const char *s1);
void				ft_putstr(const char *s);
size_t				ft_strlen(const char *s);
char				*ft_strstr(const char *s1, const char *s2);
size_t				ft_strlenchr(const char *s, char c);
void				ft_putchar(char c);
void				ft_strdel(char **as);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strchr(const char *s, int c);
char				*ft_strcpy(char *dest, const char *src);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
