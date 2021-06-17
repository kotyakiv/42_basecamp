/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 19:02:32 by aristov           #+#    #+#             */
/*   Updated: 2021/06/03 08:06:33 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int n;
	int i;
	
	n = argc;
	while (n-- > 1)
	{
	i = 0;
	while (argv[n][i] != '\0')
	{
		ft_putchar(argv[n][i]);
		i++;
	}
	ft_putchar('\n');
	}
	
	/*argc = -argc;
	ft_putstr(argv[1]);
	ft_putchar('\n');*/
	return (0);
}
