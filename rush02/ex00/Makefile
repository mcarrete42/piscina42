# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarrete <mcarrete@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 21:36:15 by mcarrete          #+#    #+#              #
#    Updated: 2019/10/20 22:42:25 by mcarrete         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = main.o error_manager.o num_check.o dict_reader.o
BINARY = rush02
CFLAGS = -Wall -Werror -Wextra
SRC = main.c error_manager.c num_check.c dict_reader.c
LIB = numbers.h

all: rush02

rush02: $(OBJS)
	gcc -o $(BINARY)  $(OBJS) $(CFLAGS)

main.o: main.c numbers.h
	gcc $(CFLAGS) -c main.c

error_manager.o: error_manager.c numbers.h
	gcc -c $(CFLAGS) error_manager.c

num_check.o: num_check.c numbers.h
	gcc -c $(CFLAGS) num_check.c

dict_reader.o: dict_reader.c numbers.h
	gcc -c $(CFLAGS) dict_reader.c

fclean:
	rm -f $(BINARY) $(OBJS)

norme:
	norminette $(SRC) $(LIB)
