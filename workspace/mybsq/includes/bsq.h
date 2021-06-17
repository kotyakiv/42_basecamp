/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:05:07 by ykot              #+#    #+#             */
/*   Updated: 2021/06/16 20:24:27 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef	struct	s_poistion
{
	int		max_row;
	int		max_col;
	int		value;
	int		lines;
	int		columns;
	char	obstacle;
	char	empty;
	char	full;
	int		error;
	int		allocat;
}				t_pos;

typedef	struct	s_logic
{
	int	n;
	int	stop;
	int	r;
	int	c;
}				t_log;

typedef	struct	s_read_var
{
	int		fd;
	int		ret;
	char	buf;
}				t_read_var;

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
char			*ft_strcpy(char *dest, char *src);
int				ft_ch_atoi(char *str, int n);

int				read_first_line(t_pos *a, char ***grid, t_read_var *r);
void			memory_realloc(char **buffer, int *buf_size, int i);
void			read_second_line(t_pos *a, char ***grid, t_read_var *r);
int				read_other_lines(t_pos *a, char ***grid, t_read_var *r);
int				reading(char *str, char ***grid, t_pos *a, int no_arg);

int				check_same_char(t_pos *a);
void			initial_a(t_pos *a, char *first);
int				checking_right_char(char **grid, t_pos a);
int				checking_for_read_errors(t_read_var *r);

void			algorithm(char **grid, t_pos *a);
void			print_map(char **grid, t_pos a);
void			logic(char **grid, t_pos *a, int i, int j);
void			logic_initial(t_log *b);
void			max_value(t_pos *a, t_log b, int i, int j);

void			solv_print(char **grid, t_pos *a);

#endif
