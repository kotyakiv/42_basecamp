#include <stdio.h>

int	ft_atoi(char *str);

int		main(void)
{
	char str[] = "+99";
	int x = ft_atoi(str);
	printf("%d", x);
	printf("\n");
	return (0);
}