/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 21:02:44 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/24 21:33:42 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	(void)argc;
	i = 0;
	while (argv[0][i] != '\0')
	{
		ft_print_program_name(argv[0][i]);
		i++;
	}
	return (0);
}
