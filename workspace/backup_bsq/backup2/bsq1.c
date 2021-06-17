#include "bsq.h"

void initial_a(t_pos *a, char *first)
{
	int i;

	i = 0;
	a->max_row = 0;
	a->max_col = 0;
	a->value = 0;
	a->lines = 0;
	a->columns = 0;
	i = ft_strlen(first) - 1;
	a->full = first[i--];
	a->obstacle = first[i--];
	a->empty = first[i];
	
	a->lines = first[0] - '0';
}

int  checking_right_char(char grid[10][100], t_pos a)
{
	int i;
	int j;

	i = 0;
	while (i < a.lines)
	{
		j = 0;
		while (j < a.columns)
		{
			if (grid[i][j] != a.obstacle && grid[i][j] != a.empty)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}


int reading(char *str, char grid[10][100], t_pos *a, int no_arg)
{
	int		i;
	int		ret;
	char	buf;
	char 	first[14];
	int		fd;	
	int 	rows;

/************	cheacking opening	***************/
	
	if (!no_arg)
	{
		fd = open(str, O_RDONLY);
		if (fd == -1)
			return (1);
	}
	if (no_arg)
		fd = 0;

	ret = read(fd, &buf, 1);
	if (!ret)
		return (1);
/***********	read first line		*************/
	i = 0;
	while (ret && buf != '\n')
	{
		first[i] = buf;
		ret = read(fd, &buf, 1);
		i++;
	}
	first[i] = '\0';
	initial_a(a, first);

/***********	read second line		*************/
	rows = 0;
	ret = read(fd, &buf, 1);
	i = 0;
	while (ret && buf != '\n')
	{
		grid[rows][i] = buf;
		ret = read(fd, &buf, 1);
		i++;
		a->columns = i;
	}
/***********	read other lines		*************/
	rows = 1;
	while (ret)
	{
		ret = read(fd, &buf, 1);
		i = 0;
		while (ret && buf != '\n')
		{
			grid[rows][i] = buf;
			ret = read(fd, &buf, 1);
			i++;
		}
		if (a->columns != i)
			return (1);
		rows++;
	}
	if (checking_right_char(grid, *a))
		return (1);
	if (!no_arg)
		close(fd);
	return (0);
}



