/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 22:43:36 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/20 22:50:03 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBERS_H
# define NUMBERS_H

typedef struct	s_dict
{
	char *key;
	char *value;
}				t_dict;

int				input_error(int argc, char *first_arg, char *second_arg);
int				argc_error(int argc);
void			print_error(void);
void			print_dict_error(void);

int				digit_counter(char *number_arg);
char			*argv_converter(char *number_arg);
void			*get_malloc(void);

int				dict_opener(int argc, char *first_arg, char *second_arg);
int				dict_reader(int argc, char *first_arg, char *second_arg);
char			*dict_splitter(void);

#endif
