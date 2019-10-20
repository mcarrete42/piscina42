/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 11:48:02 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/20 14:14:31 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "numbers.h"
#include <stdio.h>

int 	main(int argc, char **argv)
{

	char *first_arg = argv[1];
	char *second_arg = argv[2];

	if (input_error(argc, first_arg, second_arg) != 0)
		return(1);

	printf("%d", dict_opener(argc, first_arg, second_arg));
	
	//print_dict_error(); //prueba solo

	//argv_converter(first_arg, second_arg);

	//printf("número de argumentos: %d\n, first arg:  %s\n, second arg: %s\n", argc, first_arg, second_arg);
}
