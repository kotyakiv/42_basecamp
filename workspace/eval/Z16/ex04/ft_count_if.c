/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccariou <ccariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:55:35 by ccariou           #+#    #+#             */
/*   Updated: 2021/06/08 07:07:57 by ccariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int index;
	int count;

	index = 0;
	count = 0;
	while (tab[index] != '\0')
	{
		if ((*f)(tab[index]) == 1)
			count++;
		index++;
	}
	return (count);
}
