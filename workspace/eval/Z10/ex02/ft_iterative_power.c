/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekantane <ekantane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:00:09 by ekantane          #+#    #+#             */
/*   Updated: 2021/05/29 19:50:12 by ekantane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;

	i = 1;
	if (power < 0)
		return (0);
	while (power)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
