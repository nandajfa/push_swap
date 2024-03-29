# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/07 20:44:42 by jefernan          #+#    #+#              #
#    Updated: 2022/07/20 22:31:53 by jefernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC		=  gcc
CFLAGS	= -Wall -Wextra -Werror 

RM			= rm -rf
MKDIR		= mkdir -p

LIBFT   = ./libft/libft.a

HEADER	= $(SRCS_DIR)/push_swap.h

SRCS_DIR  = ./src
OBJ_DIR = ./objs

SRCS = 	main.c check_args.c is_sorted.c operations_a.c operations_b.c \
		operations_both.c sort.c radix.c
		
SOURCES			=	$(addprefix $(SRCS_DIR)/, $(SRCS))

OBJECTS			=	$(SOURCES:$(SRCS_DIR)/%.c=$(OBJ_DIR)/%.o)

$(OBJ_DIR)/%.o:		$(SRCS_DIR)/%.c $(HEADER)
					mkdir -p $(OBJ_DIR)	
					$(CC) $(CFLAGS) -c $< -o $@

all:		${NAME}

${NAME}:  ${LIBFT} ${OBJECTS}
			$(CC) $(CFLAGS) $(OBJECTS) $(LIBFT) -o ${NAME}
			
${LIBFT}:
			make -C ./libft


clean:
		make clean -C ./libft
			${RM} ${OBJ_DIR}

fclean:	clean
			make fclean -C ./libft
			${RM} $(NAME)
			
re:		fclean all

.PHONY: all clean fclean re
