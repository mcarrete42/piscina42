/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrd.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:28:30 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/09 10:59:59 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** This function is used to print 'char c'.
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
** this function is used to print the alphabet as a list in an ascending order,
**startinf from a to z, in a single line.
*/

void	ft_print_alphabet(void)
{
	char	alf;

	alf = 'a';
	while (alf <= 'z')
	{
		ft_putchar(alf++);
	}
}
