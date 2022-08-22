# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jerhee <jerhee@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18 10:24:10 by jerhee            #+#    #+#              #
#    Updated: 2022/08/22 17:10:22 by jerhee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Werror -Wextra -Wall
SRCS = ft_printf.c print_arg.c utils.c
OBJS = ft_printf.o print_arg.o utils.o
NAME = libftprintf.a

all : $(NAME)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

re : fclean all