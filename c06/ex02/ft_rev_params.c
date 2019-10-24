/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 21:02:44 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/24 22:24:40 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = argc - 1;
	while (i >= 1)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_rev_params(argv[i][j]);
			j++;
		}
		i--;
		write(1, "\n", 1);
	}
	return (0);
}
