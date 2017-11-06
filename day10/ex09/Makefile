# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dphay <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/12 23:59:10 by dphay             #+#    #+#              #
#    Updated: 2017/09/18 22:50:54 by dphay            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

SRCS =	srcs/ft_putchar.c	\
	 	srcs/ft_putstr.c	\
	   	srcs/ft_putnbr.c	\
		srcs/ft_strcmp.c	\
	  	srcs/ft_atoi.c		\
		srcs/ft_op.c		\
		srcs/do_op.c		

OBJS = $(SRCS:.c=.o)

all:
	@make $(NAME)

$(NAME) : $(OBJS)
	gcc -Wall -Werror -Wextra $(SRCS)
	mv a.out $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME) 

re: fclean all
