/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:09:07 by bkandemi          #+#    #+#             */
/*   Updated: 2021/05/27 14:37:29 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char end;

	end = 'z';
	while (end >= 'a')
	{
		ft_putchar(end);
		end--;
	}
	ft_putchar('\n');
}
