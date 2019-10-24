/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dverdugo <dverdugo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:47:44 by dverdugo          #+#    #+#             */
/*   Updated: 2019/10/23 20:07:32 by dverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "lib.h"

void	ft_print_map(char **map, int n, int m)
{
	int		i;

	i = 0;
	while (i < n)
	{
		write(1, map[i], m);
		i++;
		write(1, "\n", 1);
	}
}

void	ft_write(char **map, int *solution, char filled_symbol)
{
	int		i;
	int		j;
	int		offset;

	offset = solution[0];
	i = solution[1] - offset + 1;
	while (i <= solution[1])
	{
		j = solution[2] - offset + 1;
		while (j <= solution[2])
		{
			map[i][j] = filled_symbol;
			j++;
		}
		i++;
	}
}
