#include <stdio.h>

void ft_swap (int *a, int *b);

int main()
{
	int a = 5;
	int b = 0;
	printf("%d\t%d\n", a, b);
	ft_swap(&a, &b);
	printf("%d\t%d\n", a, b);
	return 0;
}