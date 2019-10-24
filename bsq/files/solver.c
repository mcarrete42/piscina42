/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dverdugo <dverdugo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:18:35 by dverdugo          #+#    #+#             */
/*   Updated: 2019/10/23 21:55:50 by dverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lib.h"

int		**ft_map_to_matrix(char **map, int n, int m, char *symbols)
{
	int		i;
	int		j;
	int		**arr;

	arr = ft_allocate_2d(n, m, sizeof(**arr));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < m)
		{
			arr[i][j] = ft_char_to_num(map[i][j], symbols);
			j++;
		}
		i++;
	}
	return (arr);
}

int		min_neighbour(int i, int j, int **matrix)
{
	int left;
	int up;
	int diagonal;

	up = matrix[i - 1][j];
	left = matrix[i][j - 1];
	diagonal = matrix[i - 1][j - 1];
	if (left <= up && left <= diagonal)
		return (left);
	if (up <= left && up <= diagonal)
		return (up);
	return (diagonal);
}

void	ft_matrix_adder(int n, int m, int **matrix)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < m)
		{
			if (i != 0 && j != 0 && matrix[i][j] != 0)
				matrix[i][j] = (matrix[i][j] + min_neighbour(i, j, matrix));
			j++;
		}
		i++;
	}
}

int		*ft_find_max(int n, int m, int **matrix, int *solution)
{
	int		i;
	int		j;

	solution[0] = 0;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < m)
		{
			if (matrix[i][j] > solution[0])
			{
				solution[0] = matrix[i][j];
				solution[1] = i;
				solution[2] = j;
			}
			j++;
		}
		i++;
	}
	return (solution);
}
