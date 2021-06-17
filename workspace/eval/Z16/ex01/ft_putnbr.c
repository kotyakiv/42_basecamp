/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 12:40:14 by ykot              #+#    #+#             */
/*   Updated: 2021/06/01 18:23:37 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	write_to_array(int nb, int *i, int digits[])
{
	int number;

	number = nb;
	while (nb >= 1)
	{
		number = nb % 10;
		digits[(*i)++] = number + 48;
		nb /= 10;
	}
	(*i)--;
}

void	ft_putnbr(int nb)
{
	int digits[10];
	int i;
	int m;

	m = 0;
	i = 0;
	if (nb == 0)
		ft_putchar('0');
	if (nb == -2147483648)
	{
		nb += 1;
		m = 1;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	write_to_array(nb, &i, digits);
	if (m == 1)
		digits[0] += 1;
	while (i >= 0)
		ft_putchar((char)digits[i--]);
}
