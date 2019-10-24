/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 22:11:14 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/24 18:17:42 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int is_negative;
	int digit;
	int i;

	i = 0;
	is_negative = 1;
	digit = 0;
	while ((str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ') && str[i] != '\0')
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
	{
		if (str[i] == '-')
			is_negative = is_negative * (-1);
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			digit = digit * 10 + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (digit * is_negative);
}
