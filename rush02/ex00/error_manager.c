/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 12:33:48 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/20 14:15:54 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "numbers.h"
#include <stdio.h>

int input_error(int argc, char *first_arg, char *second_arg)
{
	(void)*first_arg;
	(void)*second_arg;
   	
	if (argc < 2 || argc > 3)
		print_error();
	return (1);
}

void print_error(void)
{
	write(1, "Error\n", 11);
}

void  print_dict_error(void)
{
	write(1, "holat Error\n", 11);
}
