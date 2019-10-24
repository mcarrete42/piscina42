/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dverdugo <dverdugo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:19:05 by dverdugo          #+#    #+#             */
/*   Updated: 2019/10/23 23:02:52 by dverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_reallocate_str(char *str, int size, int new_size)
{
	char	*new;
	int		i;

	i = 0;
	if (new_size <= size)
		return (str);
	new = malloc(new_size);
	if (!new)
	{
		free(str);
		exit(1);
	}
	while (i < size)
	{
		new[i] = str[i];
		i++;
	}
	free(str);
	return (new);
}

void	*ft_allocate_pointers(int dim)
{
	void	**ptr;
	int		i;

	i = 0;
	ptr = malloc(dim * sizeof(*ptr));
	while (i < dim)
		ptr[i++] = NULL;
	return (ptr);
}

void	**ft_allocate_2d(int dim1, int dim2, int size)
{
	void	**ptr;
	int		i;

	ptr = malloc(dim1 * sizeof(*ptr));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < dim1)
	{
		ptr[i] = malloc(dim2 * size);
		if (!ptr[i])
			return (NULL);
		i++;
	}
	return (ptr);
}

int		**ft_free_int_2d(int **ptr, int dim)
{
	int		i;

	i = 0;
	while (i < dim)
	{
		if (ptr[i])
			free(ptr[i++]);
		i++;
	}
	free(ptr);
	return (NULL);
}

char	**ft_free_char_2d(char **ptr, int dim)
{
	int		i;

	i = 0;
	while (i < dim)
	{
		if (ptr[i])
			free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}
