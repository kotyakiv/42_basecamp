/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:48:08 by ykot              #+#    #+#             */
/*   Updated: 2021/05/29 16:22:08 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */






void	ft_putchar (char c);

void	ft_print_alphabet(void)
{
	int index;

	index = 'a';
	while (index <= 'z')
	{
		ft_putchar(index);
		index++;
	}
}
