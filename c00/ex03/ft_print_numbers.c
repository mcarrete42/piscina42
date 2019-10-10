/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:28:30 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/09 11:06:52 by mcarrete         ###   ########.fr       */
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
** this function is used to print digits form zero to nine as a list in an
** ascending order. The char asigned (fortyeight and fiftyseven) correspond to
** zero and nine in the ascii table.
*/

void	ft_print_numbers(void)
{
	char	ascii_digit;

	ascii_digit = 48;
	while (ascii_digit <= 57)
	{
		ft_putchar(ascii_digit++);
	}
}
