/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 10:09:30 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/17 17:14:30 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putstr_non_printable(char *str);

int		main(void)
{
	char str[11] = "Hola\na\ta\0a";

	ft_putstr_non_printable(str);
//	printf("%d", test);
}
