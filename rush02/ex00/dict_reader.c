/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_reader.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 22:20:24 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/20 22:49:53 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "numbers.h"
#include <fcntl.h>

int		dict_opener(int argc, char *first_arg, char *second_arg)
{
	int dict_ok;

	(void)*first_arg;
	if (argc == 2)
	{
		dict_ok = open("numbers.dict", O_RDONLY);
	}
	if (argc == 3)
	{
		dict_ok = open(second_arg, O_RDONLY);
	}
	return (dict_ok);
}

/*
** int		dict_reader(int argc, char *first_arg, char *second_arg, *tab)
**{
**	int dict_read;
**	int i;
**	char *tab;
**
**	dict_read = read();
**	i = 0;
**	if (argc == 2)
**	{
**		while (dict_read != 0)
**		{
**			 read("number.dict", &tab[i], 1);
**			 i++;
**		}
**	}
**	if (argc == 3)
**	{
**		dict_ok = open(second_arg, O_RDONLY);
**	}
**	return (dict_ok);
**}
*/
