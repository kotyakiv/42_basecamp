/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:50:48 by ykot              #+#    #+#             */
/*   Updated: 2021/06/13 17:39:17 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# define BUF_SIZE 10000

char	*g_buf;
int		g_counter;

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_ch_atoi(char *str, int *n);
void	ft_line2(int x, char a, char b);
void	ft_line3(int x, char a, char b, char c);

int		ft_strcmp(char *s1, char *s2);
void	ft_prntnbr(int nbr);
void	ft_readchar(char c);
void	ft_i_line2(int x, char a, char b);
void	ft_i_line3(int x, char a, char b, char c);

void	read_x_y(const char *buf, int *x, int *y);
int		read_input(char *buf2);
void	check_rushes(char *buf, int x, int y, int result[5]);
int		no_result(int result[5]);

void	rush_i_00(int x, int y);
void	rush_i_01(int x, int y);
void	rush_i_02(int x, int y);
void	rush_i_03(int x, int y);
void	rush_i_04(int x, int y);

void	print_rush_names(int i, int x, int y);
void	print_result(int result[5], int x, int y);

#endif
