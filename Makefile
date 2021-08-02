# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/11 14:04:21 by clesaffr          #+#    #+#              #
#    Updated: 2021/08/03 01:27:15 by clesaffr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC	=	gcc

CFLAGS	=	-Wall -Werror -Wextra

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
			srcs/ft_percent.c\
			srcs/itoas.c\
			srcs/ft_intbis.c

OBJS	=	$(SRCS:.c=.o)

INCLUDES	=	-I ./includes

all		:	$(NAME) $(OBJS)

$(NAME) :	$(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	@clear
	@echo "I MADE IT MOMMY :)"

$(OBJS) :	$(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS) $(HEADER)
	mv *.o srcs/
	
clean	:
	rm -rf $(OBJS)

fclean	:	clean
	rm -rf $(NAME)
	@clear

re		:	fclean all

.PHONY: clean fclean all re
