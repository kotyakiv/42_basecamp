/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamaras <acamaras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:00:55 by acamaras          #+#    #+#             */
/*   Updated: 2021/06/02 15:08:29 by acamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 1)
	{
		while (argv[0][i])
		{
			ft_putchar(argv[0][i++]);
		}
		ft_putchar('\n');
	}
	return (0);
}
