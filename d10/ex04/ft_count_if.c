/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 19:08:19 by ykot              #+#    #+#             */
/*   Updated: 2021/06/07 19:12:25 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]))
			counter++;
		i++;
	}
	return (counter);
}
