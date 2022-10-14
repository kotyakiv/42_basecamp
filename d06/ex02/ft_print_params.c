/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:31:40 by ykot              #+#    #+#             */
/*   Updated: 2021/06/01 20:40:48 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int n;

	n = 1;
	while (n < argc)
	{
		i = 0;
		while (argv[n][i] != '\0')
			ft_putchar(argv[n][i++]);
		ft_putchar('\n');
		n++;
	}
	return (0);
}
