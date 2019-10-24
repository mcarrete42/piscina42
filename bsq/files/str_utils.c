/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:57:38 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/23 21:54:16 by dverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_line_length(char *str, int n_chars)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\n' && i < n_chars)
		i++;
	i++;
	while (str[i] && str[i] != '\n')
	{
		i++;
		count++;
	}
	return (count);
}

int		ft_str_is_numeric_n(char *str, int n)
{
	int i;

	i = 0;
	while (i < n && str[i])
	{
		if (str[i] < '0' || (str[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}

int		ft_atoi_n(char *str, int size)
{
	int		i;
	int		j;
	int		sum;
	int		base;

	i = 0;
	sum = 0;
	while (str[i] && i < size)
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		base = 1;
		j = i + 1;
		while (str[j] && j < size)
		{
			base *= 10;
			j++;
		}
		sum += base * (str[i] - '0');
		i++;
	}
	return (sum);
}

int		ft_char_to_num(char c, char *symbols)
{
	if (c == symbols[0])
		return (1);
	else if (c == symbols[1])
		return (0);
	return (-1);
}
