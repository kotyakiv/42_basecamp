/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:21:46 by ccariou           #+#    #+#             */
/*   Updated: 2021/06/09 09:04:52 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_any(char **tab, int (*f)(char*))
{
	int index;

	index = 0;
	while (tab[index])
		if ((*f)(tab[index++]))
			return (1);
	return (0);
}
