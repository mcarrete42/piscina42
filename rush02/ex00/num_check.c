/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:16:59 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/20 22:49:59 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "numbers.h"
#include <stdlib.h>

void	print(char *c)
{
	write(1, &c, 1);
}

int		digit_counter(char *number_arg)
{
	int len;

	len = 0;
	while (number_arg[len] != '\0')
		len++;
	return (len);
}

char	*argv_converter(char *number_arg)
{
	int i;

	i = 0;
	print("\n");
	while (number_arg[i] != '\0')
	{
		print(&number_arg[i]);
		i++;
	}
	return (number_arg);
}

void	*get_malloc(void)
{
	char *tab;

	tab = (malloc(sizeof(*tab) * 10));
	return (tab);
}
