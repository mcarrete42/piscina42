/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dverdugo <dverdugo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:19:19 by dverdugo          #+#    #+#             */
/*   Updated: 2019/10/23 23:05:15 by dverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "lib.h"

int		ft_estimate_extra_buffer(char *buffer, int b_read)
{
	int		nlines;
	int		nchars_header;
	int		nchars_map;
	int		i;

	nlines = ft_preparse_settings(buffer, b_read);
	if (nlines <= 0)
		return (-1);
	i = 0;
	nchars_header = 0;
	while (buffer[i] != '\n' && i < b_read)
	{
		nchars_header++;
		i++;
	}
	if (i == b_read)
		return (b_read + BUFF_SIZE);
	nchars_header++;
	i++;
	nchars_map = 0;
	while (buffer[i] != '\n' && i++ < b_read)
		nchars_map++;
	if (i == b_read + BUFF_SIZE)
		return (b_read + BUFF_SIZE);
	return (nchars_header + (nchars_map + 1) * nlines);
}

int		ft_read(int fd, char **buffer)
{
	int		total_buff;
	int		r;
	int		ri;

	if (fd < 0)
		return (-1);
	total_buff = BUFF_SIZE;
	*buffer = malloc(total_buff * sizeof(**buffer));
	if (!*buffer)
		exit(1);
	r = 0;
	ri = read(fd, *buffer, total_buff);
	while (ri > 0)
	{
		r += ri;
		if (r == total_buff)
			total_buff = ft_estimate_extra_buffer(*buffer, r) + 1;
		if (total_buff < 0)
			return (-1);
		*buffer = ft_reallocate_str(*buffer, r, total_buff);
		ri = read(fd, (*buffer + r), total_buff - r);
	}
	if (r < 0 || (*buffer)[r - 1] != '\n')
		return (-1);
	return (r);
}

char	*ft_parse_line(char *buffer, int line_len, char *symbols, char **map)
{
	int		i;
	char	*line;

	line = malloc(line_len * sizeof(*line));
	if (!line)
	{
		free(buffer);
		ft_kill_with_map(map, ft_parse_settings(buffer, symbols, line_len));
	}
	i = 0;
	while (i < line_len && buffer[i] != '\n')
	{
		if (buffer[i] != symbols[0]
			&& buffer[i] != symbols[1])
			return (NULL);
		line[i] = buffer[i];
		i++;
	}
	if (i != line_len || buffer[i] != '\n')
		return (NULL);
	return (line);
}

char	**ft_parse_map(char *buffer, int nlines, int b_read, char *symbols)
{
	int		i;
	int		line_i;
	int		line_len;
	char	**map;

	i = 0;
	while (buffer[i] != '\n' && i < b_read)
		i++;
	i++;
	line_len = ft_line_length(buffer, b_read);
	map = ft_allocate_pointers(nlines);
	if (!map)
	{
		ft_kill_with_buffer(buffer);
	}
	line_i = 0;
	while (line_i < nlines)
	{
		map[line_i] = ft_parse_line(&buffer[i], line_len, symbols, map);
		if (!map[line_i])
			return (NULL);
		i += line_len + 1;
		line_i++;
	}
	return (map);
}
