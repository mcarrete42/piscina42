/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 11:48:02 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/20 22:49:55 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "numbers.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char *first_arg;
	char *second_arg;
	char *ptr;

	first_arg = argv[1];
	second_arg = argv[2];
	ptr = get_malloc();
	if (input_error(argc, first_arg, second_arg) != 0)
		return (3);
	if (argc == 2)
		digit_counter(first_arg);
	argv_converter(first_arg);
	if (argc == 3)
	{
		digit_counter(second_arg);
		argv_converter(second_arg);
	}
	if (dict_opener(argc, first_arg, second_arg) < 0)
	{
		print_dict_error();
		return (4);
	}
}
