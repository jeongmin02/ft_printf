# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jerhee <jerhee@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18 10:24:10 by jerhee            #+#    #+#              #
#    Updated: 2022/08/18 10:58:11 by jerhee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Werror -Wextra -Wall
SRCS = 
OBJS = 
AR = ar rcs
NAME = libft.a

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I includes -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

re : fclean all