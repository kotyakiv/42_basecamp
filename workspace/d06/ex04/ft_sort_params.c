/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:54:36 by ykot              #+#    #+#             */
/*   Updated: 2021/06/02 16:26:49 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	print_array(int argc, char **argv)
{
	int n;
	int i;

	n = 1;
	while (n < argc)
	{
		i = 0;
		while (argv[n][i] != '\0')
			ft_putchar(argv[n][i++]);
		ft_putchar('\n');
		n++;
	}
}

int		compare_str(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] != '\0' || b[i] != '\0')
	{
		if (a[i] > b[i])
			return (1);
		if (a[i] < b[i])
			return (0);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int n;
	int flag;

	flag = 1;
	while (flag)
	{
		flag = 0;
		n = 1;
		while (n < argc - 1)
		{
			if (compare_str(argv[n], argv[n + 1]))
			{
				swap(&argv[n], &argv[n + 1]);
				flag = 1;
			}
			n++;
		}
	}
	print_array(argc, argv);
	return (0);
}
