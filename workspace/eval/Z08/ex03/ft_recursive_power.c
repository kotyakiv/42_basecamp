/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 20:08:37 by starnane          #+#    #+#             */
/*   Updated: 2021/05/30 06:57:41 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int a;
	int i;

	a = nb;
	i = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (a);
	}
	else
	{
		while (i++ < power)
		{
			return (a * ft_recursive_power(nb, power - 1));
		}
	}
	return (0);
}
