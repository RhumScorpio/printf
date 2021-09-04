# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/11 14:04:21 by clesaffr          #+#    #+#              #
#    Updated: 2021/09/04 16:51:37 by clesaffr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME		=	libftprintf.a

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra

SRCS		=	flag_initialize.c\
				into_array.c\
				parsing_args.c\
				parsing_printf.c\
				print_char.c\
				print_hexabase.c\
				print_hexa.c\
				print_int.c\
				print_intspec.c\
				print_percent.c\
				print_pointer.c\
				print_pointerbis.c\
				print_string.c\
				to_print.c\
				treat_flags.c

INCLUDES	=	-I ./includes

PATH_OBJS	=	./.objs/

PATH_SRCS	=	./srcs/

F_OBJS		=	$(addprefix $(PATH_OBJS), $(OBJS))

OBJS		=	$(SRCS:.c=.o)

all				: $(PATH_OBJS) $(NAME)

$(PATH_OBJS)	:	
					@mkdir -p $(PATH_OBJS)

$(NAME)			:	$(F_OBJS)
					@ar rc $(NAME) $(F_OBJS)
					@ranlib $(NAME)

$(PATH_OBJS)%.o	:	$(PATH_SRCS)%.c
						@$(CC) $(INCLUDES) $(FLAGS) -c $< -o $@
bonus			:	all

clean			:
					@rm -rf $(F_OBJS) $(PATH_OBJS)

fclean			:	clean
					@rm -f $(NAME)

re				:	fclean all

.PHONY: clean fclean all re
