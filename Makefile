# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/11 14:04:21 by clesaffr          #+#    #+#              #
#    Updated: 2021/07/30 12:33:03 by clesaffr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC	=	gcc

EXE	=	run_main_test

CFLAGS	=	-g3

SRCS	=	srcs/libft_functions.c\
			srcs/print_width.c\
			srcs/print_cut.c\
			srcs/what_is_it.c\
			srcs/treat_flags.c\
			srcs/parsing_args.c\
			srcs/parsing_printf.c\
			srcs/ft_char.c\
			srcs/ft_hexa.c\
			srcs/ft_int.c\
			srcs/ft_pointer.c\
			srcs/ft_string.c\
			srcs/ft_base.c\
			srcs/ft_percent.c

OBJS	=	$(SRCS:.c=.o)

HEADER		=	printf.h

TEST	=	srcs/main8.c

all		:	$(NAME) $(OBJS)

$(NAME) :	$(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS) :	$(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS) -I $(HEADER)
	mv *.o srcs/

compil	:
	$(CC) -o $(EXE) $(CFLAGS) $(SRCS) $(TEST) -I $(HEADER) 

clean	:
	rm -rf $(OBJS)

fclean	:	clean
	rm -rf $(NAME)

re		:	fclean all

.PHONY: clean fclean all re
