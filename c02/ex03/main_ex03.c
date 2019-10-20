/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 10:09:30 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/17 14:01:57 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

 int ft_str_is_numeric(char *str);

int		main(void)
{
	char str[] = "sdfsdfgd345df";

 	ft_str_is_numeric(str);
	printf("%d", ft_str_is_numeric(str));
}
