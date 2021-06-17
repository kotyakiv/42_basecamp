/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekantane <ekantane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:21:54 by ekantane          #+#    #+#             */
/*   Updated: 2021/05/29 16:47:42 by ekantane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		return (0);
	else if (nb > 12)
		return (0);
	else if (nb == 1)
		return (1);
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
