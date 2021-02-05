# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/11 14:04:21 by clesaffr          #+#    #+#              #
#    Updated: 2021/02/05 14:26:50 by clesaffr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC	=	gcc

EXE	=	run_main5

CFLAGS	=	-Wall -Werror -Wextra

SRCS	=	libft_functions.c\
			print_width.c\
			print_cut.c\
			what_is_it.c\
			treat_flags.c\
			parsing_args.c\
			parsing_printf.c\
			ft_int.c\
			ft_string.c\
			ft_hexa.c\
			ft_char.c\
			ft_pointer.c

OBJS	=	$(SRCS:.c=.o)

HEADER		=	parsing_printf.h

TEST	=	main.c

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
