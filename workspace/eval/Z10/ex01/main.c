#include <stdio.h>

int	ft_recursive_factorial(int nb);

int main(void)
{
	int a =	5;
	int b = ft_recursive_factorial(a);
	printf("%d", b);
	printf("\n");
	return (0);
}