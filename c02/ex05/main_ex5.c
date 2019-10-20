/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 10:09:30 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/17 13:48:31 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int		main(void)
{
	char str[] = "zzzaaa";

 ft_str_is_uppercase(str);
	printf("%d", ft_str_is_uppercase(str));
}
