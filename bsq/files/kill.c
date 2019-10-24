/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dverdugo <dverdugo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:55:44 by dverdugo          #+#    #+#             */
/*   Updated: 2019/10/23 20:21:14 by dverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <stdlib.h>

void	ft_kill_with_map(char **arr, int n)
{
	ft_free_char_2d(arr, n);
	exit(1);
}

void	ft_kill_with_buffer(char *arr)
{
	free(arr);
	exit(1);
}
