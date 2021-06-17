/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:16:17 by bkandemi          #+#    #+#             */
/*   Updated: 2021/05/27 14:39:00 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char start;

	start = '0';
	while (start <= '9')
	{
		ft_putchar(start);
		start++;
	}
	ft_putchar('\n');
}
