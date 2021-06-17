/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 08:09:14 by leotran           #+#    #+#             */
/*   Updated: 2021/05/30 07:40:26 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0 || nb >= 12)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
