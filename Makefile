# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/11 14:04:21 by clesaffr          #+#    #+#              #
#    Updated: 2021/01/20 07:46:08 by clesaffr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC	=	gcc

EXE	=	run_printf

CFLAGS	=	-Wall -Werror -Wextra

SRCS	=	parsing_printf.c ft_types.c

OBJS	=	$(SRCS:.c=.o)

HEADER		=	parsing_printf.h

TEST	=	tester_printf.c

all		:	$(NAME) $(OBJS)

$(NAME) :	$(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS) :	$(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS) -I $(HEADER)

compil	:
	$(CC) -o $(EXE) $(CFLAGS) $(SRCS) $(TEST) -I $(HEADER) 

clean	:
	rm -rf $(OBJS)

fclean	:	clean
	rm -rf $(NAME)

re		:	fclean all

.PHONY: clean fclean all re
