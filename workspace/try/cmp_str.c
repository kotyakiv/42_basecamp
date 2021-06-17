#include <stdio.h>

void ft_putchar(char c)
{
	printf("%c", c);
}

int check_pnt(char *c, int k)
{
	int i;

	i = 0;
	while (i < k)
	{
		if (c[k] == c[i])
			return (0);
		i++;
	}
	return (1);
}


void inter_main(int argc, char **argv)
{
	int i;
	int j;

	if (argc != 2)
		return;
	i = 0;
	while (argv[0][i])
	{
		j = 0;
		while (argv[1][j])
		{
			if (argv[0][i] == argv[1][j] && check_pnt(argv[0], i))
			{
				ft_putchar(argv[0][i]);
				break;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	char *c1[] = {"padinton", "paqefwtdjetyiytneytjoeyjnejeyj"};
	char *c2[] = {"ddf6vewg64f", "gtwthgdwthdwft6h4ffdh"};
	char *c3[] = {"ddf6vewg64f", "6"};
	inter_main(2, c1);
	ft_putchar('\n');
	inter_main(2, c2);
	ft_putchar('\n');
	inter_main(2, c3);
	ft_putchar('\n');
	inter_main(1, c2);
	ft_putchar('\n');
	return 0;
}