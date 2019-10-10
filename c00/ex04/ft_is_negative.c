/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:28:30 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/09 11:15:43 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** This function is used to print 'char c', given in a separate funcion.
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
** this function is used to print the alphabet in an ascending order, in
**a single line.
*/

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
	return ;
}
