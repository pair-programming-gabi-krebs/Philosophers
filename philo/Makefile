# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/25 22:15:48 by gcosta-d          #+#    #+#              #
#    Updated: 2022/07/22 02:32:48 by lkrebs-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

CFLAGS = -Wall -Wextra -Werror -g3 -pthread 
#-fsanitize=thread
CC = gcc

VPATH = source utils

FILES = main.c \
		check_arguments.c \
		create_philo.c \
		create_threads.c \
		destroy_mutex.c \
		detach_thread.c \
		eating.c \
		init_linked_list.c \
		init_mutex.c \
		print_philo_is_dead.c \
		print_philo.c \
		routines.c \
		sleeping.c \
		current_time.c \
		thinking.c \
		thread_join.c \
		ft_atoi.c \
		ft_init.c \
		ft_lstadd_front.c \
		ft_lstnew.c \
		is_str_numeric.c \
		routine_vigilant.c \
		free_list.c \
		check_death.c \
		ft_strncmp.c

OBJ_PATH = ./objs/

OBJS = $(FILES:%.c=$(OBJ_PATH)%.o)

$(OBJ_PATH)%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ_PATH) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_PATH):
	mkdir -p objs

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(OBJ_PATH)
	rm -rf $(NAME)

re: fclean all