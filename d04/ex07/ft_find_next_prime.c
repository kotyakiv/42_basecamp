/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 19:34:18 by ykot              #+#    #+#             */
/*   Updated: 2021/05/29 19:52:37 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int i;
	int next_prime;

	next_prime = nb;
	if (nb == 0 || nb == 1 || nb < 0)
	{
		return (2);
	}
	i = 2;
	while (i <= next_prime / i)
	{
		if (next_prime % i == 0)
		{
			next_prime++;
			i = 1;
		}
		i++;
	}
	return (next_prime);
}
