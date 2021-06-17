/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 10:43:31 by bkandemi          #+#    #+#             */
/*   Updated: 2021/05/27 16:14:53 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char firstdigit;
	char seconddigit;
	char thirddigit;

	firstdigit = '0';
	while (firstdigit++ <= '7')
	{
		seconddigit = firstdigit;
		while (seconddigit++ <= '8')
		{
			thirddigit = seconddigit;
			while (thirddigit++ <= '9')
			{
				ft_putchar(firstdigit - 1);
				ft_putchar(seconddigit - 1);
				ft_putchar(thirddigit - 1);
				if (firstdigit - 1 != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
