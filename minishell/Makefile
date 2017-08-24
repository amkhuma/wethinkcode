# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/14 15:16:11 by amkhuma           #+#    #+#              #
#    Updated: 2017/08/14 15:16:13 by amkhuma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME      = minishell

PATH_SRC  = ./sources/

PATH_HEAD   = ./includes/

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(PATH_HEAD)
LIBS_LINK = -L includes/

HEAD = $(PATH_HEAD)ft_minishell.h

SRC =	minishell.c			\
		ft_strcmp.c			\
		ft_strdup.c			\
		ft_strsplit.c		\
		get_next_line.c		\
		sh_get_path.c		\
		sh_cd.c				\
		sh_echo.c			\
		sh_exec.c			\
		sh_launch.c			\
		sh_unsetenv.c		\
		ft_strcpy.c			\
		ft_strjoin.c		\
		sh_realloc.c		\
		ft_strsub.c			\
		ft_putstr.c			\
		ft_strncmp.c		\
		sh_clear.c			\
		sh_env.c			\
		sh_exit.c			\
		sh_setenv.c

OBJ  = $(addprefix $(PATH_SRC), $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME) $(LIBS_LINK)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean