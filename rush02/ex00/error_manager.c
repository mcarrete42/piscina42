/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 12:33:48 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/20 22:49:57 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "numbers.h"
#include <stdio.h>

int		input_error(int argc, char *first_arg, char *second_arg)
{
	int	i;

	i = 0;
	if (argc == 2)
		while (first_arg[i] != '\0')
		{
			if (first_arg[i] < '0' || first_arg[i] > '9')
			{
				print_error();
				return (2);
			}
			i++;
		}
	if (argc == 3)
		while (second_arg[i] != '\0')
		{
			if (second_arg[i] < '0' || second_arg[i] > '9')
			{
				print_error();
				return (2);
			}
			i++;
		}
	argc_error(argc);
	return (0);
}

int		argc_error(int argc)
{
	if (argc < 2 || argc > 3)
	{
		print_error();
		return (4);
	}
	return (0);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}

void	print_dict_error(void)
{
	write(1, "Dict Error", 11);
}
