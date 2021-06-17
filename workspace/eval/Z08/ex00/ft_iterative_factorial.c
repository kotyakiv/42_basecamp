/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starnane <starnane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:42:39 by starnane          #+#    #+#             */
/*   Updated: 2021/05/29 18:40:22 by starnane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int a;
	int i;

	a = nb;
	i = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb < 2)
	{
		return (1);
	}
	else
	{
		while (i > 1)
		{
			a = a * (i - 1);
			i = i - 1;
		}
		return (a);
	}
}
