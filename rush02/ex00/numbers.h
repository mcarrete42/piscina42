/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:39:00 by mcarrete          #+#    #+#             */
/*   Updated: 2019/10/20 14:11:15 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBERS_H
#define NUMBERS_H

int input_error(int argc, char *first_arg, char *second_arg);
void print_error(void);
void print_dict_error(void);

char *argv_converter(char *first_arg, char *second_arg);
int dict_opener(int argc, char *first_arg, char *second_arg);
int  *dict_reader(void);
char *dict_splitter(void);
#endif
