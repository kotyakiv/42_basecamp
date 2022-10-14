/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:50:22 by ykot              #+#    #+#             */
/*   Updated: 2021/05/26 13:54:25 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	ft_print_reverse_alphabet(void)
{
	char index;

	index = 'z';
	while (index >= 'a')
	{
		ft_putchar(index);
		index--;
	}
}
