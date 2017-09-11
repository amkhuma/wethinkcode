# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/11 11:19:57 by amkhuma           #+#    #+#              #
#    Updated: 2017/09/11 11:29:08 by amkhuma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

SOURCES = 	srcs/sh_exec.c\
		  	srcs/sh_get_path.c\
			srcs/get_next_line.c\
			srcs/sh_launch.c\
		    srcs/minishell.c\
			srcs/ft_sstrlen.c\
			srcs/sh_cd.c\
			srcs/sh_echo.c\
			srcs/ft_sstrnew.c\
			srcs/sh_clear.c\
			srcs/sh_env.c\
			srcs/sh_increase_array.c\
			srcs/sh_realloc.c\
			srcs/sh_setenv.c\
			srcs/ft_split.c\
		    srcs/sh_unsetenv.c

HEADER = -I include

LFLAGS = -L./libft/ -lft

FLAGS = -o minishell -Wall -Werror -Wextra

all:
		@make -C libft/
		@gcc $(FLAGS) $(SOURCES) $(HEADER) $(LFLAGS)
		@echo "\033[00;32mMade '$(NAME)'\033[0m"

clean:
		@rm $(NAME)
		@make -C libft/ clean

fclean: clean
		@rm -rf $(NAME)
		@rm -rf libft/libft.a
		@echo "\033[00;32mRemoved '$(NAME)'

re: fclean all