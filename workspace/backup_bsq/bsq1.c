#include "bsq.h"


int reading(char *str, char grid[10][100], int *lines, int *col)
{
	int		i;
	int		ret;
	char	buf;
	char 	first[6];
	int		fd;	

	i = 0;
	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (1);
	ret = read(fd, &buf, 1);
	if (!ret)
		return (1);
	while (ret && buf != '\n')
	{
		first[i] = buf;
		ret = read(fd, &buf, 1);
		i++;
	}
	first[i] = '\0';
	*lines = first[0] - '0';

	
	int rows = 0;
	while (ret)
	{
		
		ret = read(fd, &buf, 1);
		
		i = 0;
		while (ret && buf != '\n')
		{
			grid[rows][i] = buf;
			ret = read(fd, &buf, 1);
			i++;
			*col = i;
		}
		rows++;
	}
	return (0);
}

int algorithm(char	grid[10][100], int lines, int col, t_pos *a)
{

	int i;
	int j;
	int n;
	int stop;
	int r;
	int c;

	i = 0;
	j = 0;
	while (i < lines)
	{
		j = 0;
		while (j < col)
		{
			if (grid[i][j] == '.')
			{
				n = 0;
				stop = 1;
				while (stop)
				{
					r = 0;
					while (r <= n + 1)
					{
						if (i + n + 1 == lines)
						{
							stop = 0;
							break;
						}
						c = 0;
						while (c <= n + 1)
						{
							if (j + n + 1== col)
							{
								stop = 0;
								break;
							}
							if (grid[i + r][j + c] != '.')
								stop = 0;
							c++;
						}
						r++;
					}
					n++;
				}
				if (n > a->value)
				{
					a->value = n;
					a->row = i;
					a->col = j;
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	print_map(char grid[10][100], t_pos a, int lines, int col)
{
	int i;
	int j;

	printf("%d\n", a.row);
	printf("%d\n", a.col);
	printf("%d\n", a.value);
	i = 0;
	while (i < lines)
	{
		j = 0;
		while (j < col)
		{
			if ((i >= a.row  && i < a.row + a.value)
			&& (j >= a.col && j < a.col + a.value))
				ft_putchar('X');
			else
				ft_putchar(grid[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}

}