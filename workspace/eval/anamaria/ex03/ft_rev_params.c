/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamaras <acamaras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:56:30 by acamaras          #+#    #+#             */
/*   Updated: 2021/06/02 16:15:07 by acamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (--argc != 0)
	{
		while (argv[argc][i])
		{
			ft_putchar(argv[argc][i++]);
		}
		i = 0;
		ft_putchar('\n');
	}
	return (0);
}
