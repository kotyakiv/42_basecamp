/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamaras <acamaras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:09:21 by acamaras          #+#    #+#             */
/*   Updated: 2021/06/02 17:18:42 by acamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (--argc)
	{
		while (argv[i][j])
		{
			ft_putchar(argv[i][j++]);
		}
		j = 0;
		i++;
		ft_putchar('\n');
	}
	return (0);
}
