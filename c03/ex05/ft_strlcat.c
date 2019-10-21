/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:12:18 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/21 14:56:55 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	j = 0;
	i = 0;
	k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0')
		k++;
	if (size == 0)
		return (k);
	while (src[j] != '\0' && i < (size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[size - 1] = '\0';
	if (i < size)
		return (k + i);
	return (k + size);
}
