/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 21:09:01 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/09 13:17:42 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a != b)
			{
				ft_putchar((a / 10) + '0');
				ft_putchar((a % 10) + '0');
				write(1, " ", 1);
				ft_putchar((b / 10) + '0');
				ft_putchar((b % 10) + '0');
				if (a < 98)
				{
					write(1, ", ", 2);
				}
			}
			b++;
		}
		a++;
	}
}
