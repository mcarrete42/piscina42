# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarrete <mcarrete@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 21:36:15 by mcarrete          #+#    #+#              #
#    Updated: 2019/10/23 20:04:24 by dverdugo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC 		= main.c errors.c str_utils.c memory.c output.c read.c settings.c \
			  solver.c kill.c 
OBJ 		= ${SRC:.c=.o}
LIB 		= lib.h
BINARY 		= BSQ
CFLAGS 		= -Wall -Werror -Wextra 
CC 			= gcc

.c.o:
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: 			${BINARY}

${BINARY}:		${OBJ} ${LIB}
				${CC} -o ${BINARY} ${OBJ}

clean:	
				rm -f ${OBJ}

fclean:			clean
				rm -f ${BINARY}

norme:
				norminette ${SRC} ${LIB}

.PHONY:			clean fclean norme
