/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dverdugo <dverdugo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 20:59:03 by dverdugo          #+#    #+#             */
/*   Updated: 2019/10/23 20:32:43 by dverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# define BUFF_SIZE 256

int		ft_atoi_n(char *str, int size);
int		ft_solve(char *buffer, int b_read, char *symbols);
void	*ft_reallocate_str(char *str, int size, int new_size);
int		ft_read(int fd, char **bufer);
int		ft_parse_settings(char *buffer, char *symbol, int b_read);
int		ft_preparse_settings(char *buffer, int b_read);
char	**ft_parse_map(char *buffer, int nlines, int b_size, char *symbols);
int		ft_line_length(char *buffer, int bsize);
void	ft_error(void);
void	ft_map_error(void);
int		ft_strlen(char *str);
int		ft_str_is_numeric_n(char *str, int n);
int		ft_validate_settings(char *symbols);
int		ft_char_to_num(char c, char *symbols);
void	ft_print_map(char **map, int n, int m);
void	ft_print_matrix(int **matrix, int n, int m);
int		**ft_map_to_matrix(char **map, int n, int m, char *symbols);
int		**ft_allocate_2d(int dim1, int dim2, int size);
void	*ft_allocate_pointers(int dim);
int		**ft_free_int_2d(int **ptr, int dim);
char	**ft_free_char_2d(char **ptr, int dim);
void	ft_matrix_adder(int n, int m, int **matrix);
int		*ft_find_max(int n, int m, int **matrix, int *solution);
void	ft_write(char **map, int *solution, char filled_symbol);
void	ft_kill_with_map(char **arr, int n);
void	ft_kill_with_buffer(char *arr);

#endif
