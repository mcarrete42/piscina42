/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dverdugo <dverdugo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:49:12 by dverdugo          #+#    #+#             */
/*   Updated: 2019/10/23 21:48:12 by dverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_solve(char *buffer, int b_read, char *symbols)
{
	int		dims[2];
	int		solution[3];
	char	**map;
	int		**matrix;

	dims[0] = ft_parse_settings(buffer, symbols, b_read);
	if (dims[0] <= 0)
		return (-1);
	dims[1] = ft_line_length(buffer, b_read);
	map = ft_parse_map(buffer, dims[0], b_read, symbols);
	if (!map)
		return (-1);
	free(buffer);
	buffer = NULL;
	matrix = ft_map_to_matrix(map, dims[0], dims[1], symbols);
	if (!matrix)
		ft_kill_with_map(map, dims[0]);
	ft_matrix_adder(dims[0], dims[1], matrix);
	ft_find_max(dims[0], dims[1], matrix, solution);
	matrix = ft_free_int_2d(matrix, dims[0]);
	ft_write(map, solution, symbols[2]);
	ft_print_map(map, dims[0], dims[1]);
	map = ft_free_char_2d(map, dims[0]);
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		b_read;
	char	*buff;
	char	symbols[3];

	buff = NULL;
	if (argc == 1)
		i = 0;
	else
		i = 1;
	while (i < argc)
	{
		b_read = ft_read(i == 0 ? 0 : open(argv[i], O_RDONLY), &buff);
		if (buff)
		{
			if (ft_solve(buff, b_read, symbols) < 0)
				ft_map_error();
		}
		else
			ft_map_error();
		if (i < argc - 1)
			write(1, "\n", 1);
		i++;
	}
	return (0);
}
