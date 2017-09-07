# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/14 15:16:11 by amkhuma           #+#    #+#              #
#    Updated: 2017/09/07 09:53:58 by amkhuma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME      = minishell

PATH_SRC  = ./sources/

PATH_HEAD   = ./includes/

CC = gcc
CFLAGS = -g3 -Wall -Wextra -Werror -I$(PATH_HEAD)
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
		sh_setenv.c

OBJ  = $(addprefix $(PATH_SRC), $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME) $(LIBS_LINK)
	@echo "\033[00;32mMade '$(NAME)'\033[0m"

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[00;32mRemoved '$(NAME)''$(OBJ)\n'\033[0m"

re: fclean all

val:
	@valgrind --leak-check=full ./minishell

.PHONY: clean fclean
