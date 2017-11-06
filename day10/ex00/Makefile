# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dphay <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/12 23:59:10 by dphay             #+#    #+#              #
#    Updated: 2017/09/18 22:52:35 by dphay            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRCS =	srcs/ft_putchar.c	\
	 	srcs/ft_putstr.c	\
	   	srcs/ft_strcmp.c	\
	   	srcs/ft_strlen.c	\
	   	srcs/ft_swap.c

OBJS =	ft_putchar.o	\
	 	ft_putstr.o		\
	 	ft_strcmp.o		\
	 	ft_strlen.o		\
	 	ft_swap.o

LIB = libft.a

all:
	@make $(NAME)

$(NAME) :
	gcc -Wall -c $(SRCS)
	ar rc $(LIB) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(LIB)

re: fclean all
