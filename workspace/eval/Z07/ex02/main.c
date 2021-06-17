#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a = 0;
	int b = 5000;
	printf("%d\t%d\n", a, b);
	ft_swap(&a, &b);
	printf("%d\t%d\n", a, b);
	return (0);
}