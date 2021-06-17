/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atenhune <atenhune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:25:11 by atenhune          #+#    #+#             */
/*   Updated: 2021/06/08 18:50:31 by atenhune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int luku;

	i = 0;
	luku = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
		{
			luku++;
		}
		i++;
	}
	return (luku);
}