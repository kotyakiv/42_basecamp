/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raho <raho@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 09:51:04 by raho              #+#    #+#             */
/*   Updated: 2021/06/02 10:19:48 by raho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int h;
	int i;

	h = argc;
	i = h;
	while (i > 1)
	{
		ft_putstr(argv[i - 1]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
