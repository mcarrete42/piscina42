/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex06.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 10:09:30 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/17 13:45:50 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int		main(void)
{
	char str[] = "\t";

 ft_str_is_printable(str);
	printf("%d", ft_str_is_printable(str));
}
