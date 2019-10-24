/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   settings.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:47:34 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/23 21:53:56 by dverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		ft_parse_settings(char *buffer, char *symbols, int b_read)
{
	int		i;
	int		length;

	i = 0;
	length = 0;
	while (buffer[i] != '\n' && buffer[i] && i < b_read)
	{
		length++;
		i++;
	}
	if (buffer[i] != '\n'
		|| !ft_str_is_numeric_n(buffer, length - 3))
		return (-1);
	symbols[0] = buffer[length - 3];
	symbols[1] = buffer[length - 2];
	symbols[2] = buffer[length - 1];
	if (!ft_validate_settings(symbols))
		return (-1);
	return (ft_atoi_n(buffer, length - 3));
}

int		ft_preparse_settings(char *buffer, int b_read)
{
	int		i;
	int		length;
	char	symbols[3];

	i = 0;
	length = 0;
	while (buffer[i] != '\n' && buffer[i] && i < b_read)
	{
		length++;
		i++;
	}
	if (buffer[i] != '\n')
		return (0);
	if (!ft_str_is_numeric_n(buffer, length - 3))
		return (-1);
	symbols[0] = buffer[length - 3];
	symbols[1] = buffer[length - 2];
	symbols[2] = buffer[length - 1];
	if (!ft_validate_settings(symbols))
		return (-1);
	return (ft_atoi_n(buffer, length - 3));
}

int		ft_validate_settings(char *symbols)
{
	if (symbols[0] == symbols[1])
		return (0);
	else if (symbols[1] == symbols[2])
		return (0);
	else if (symbols[0] == symbols[2])
		return (0);
	return (1);
}
