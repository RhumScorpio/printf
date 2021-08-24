# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/11 14:04:21 by clesaffr          #+#    #+#              #
#    Updated: 2021/08/24 14:13:28 by clesaffr         ###   ########.fr        #
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
					@echo "*****PRINTF*****"
					@ar rc $(NAME) $(F_OBJS)
					@ranlib $(NAME)
					@echo "I MADE IT MOMMY :)"

$(PATH_OBJS)%.o	:	$(PATH_SRCS)%.c
						@echo Compiling
						@$(CC) $(INCLUDES) $(FLAGS) -c $< -o $@
bonus			:	all

clean			:
					@rm -rf $(F_OBJS) $(PATH_OBJS)

fclean			:	clean
					@rm -f $(NAME)
					@clear

re				:	fclean all

.PHONY: clean fclean all re
