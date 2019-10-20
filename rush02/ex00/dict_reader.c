/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_reader.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 12:22:11 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/20 14:12:09 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "numbers.h"
#include <fcntl.h>

int		dict_opener(int argc, char *first_arg, char *second_arg)
{
	int dict_ok;
	(void)first_arg;
	
	if (argc == 2)
	{
		dict_ok = open("number.dict", O_RDONLY);
	}
	if (argc == 3)
	{
		dict_ok = open(second_arg, O_RDONLY);
	}
	return (dict_ok);
}

