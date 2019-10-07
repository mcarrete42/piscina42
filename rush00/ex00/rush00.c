/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 15:35:27 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/06 21:37:34 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	top_line(int x, int y)
{
	int count;

	count = 0;
	if (x > 0 && y > 0)
	{
		ft_putchar('o');
	}
	while (count < (x - 2))
	{
		ft_putchar('-');
		count++;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	side_lines(int x, int y)
{
	int count_fill;
	int count_side;

	count_fill = 0;
	count_side = 0;
	if (y >= 1 && x >= 1)
	{
		while (count_side < (y - 2))
		{
			ft_putchar('|');
			while (count_fill < (x - 2))
			{
				ft_putchar(' ');
				count_fill++;
			}
			count_fill = 0;
			if (x > 1)
			{
				ft_putchar('|');
			}
			ft_putchar('\n');
			count_side++;
		}
	}
}

void	last_line(int x, int y)
{
	int count;

	if (x > 0 && y > 1)
	{
		count = 2;
		ft_putchar('o');
		while (count < x)
		{
			ft_putchar('-');
			count++;
		}
		if (x > 1)
		{
			ft_putchar('o');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	top_line(x, y);
	side_lines(x, y);
	last_line(x, y);
}
