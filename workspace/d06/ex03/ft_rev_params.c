/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:39:34 by ykot              #+#    #+#             */
/*   Updated: 2021/06/01 20:53:25 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int n;

	n = argc - 1;
	while (n > 0)
	{
		i = 0;
		while (argv[n][i] != '\0')
			ft_putchar(argv[n][i++]);
		ft_putchar('\n');
		n--;
	}
	return (0);
}
