#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
	int b = ft_find_next_prime(2143483648);
	printf("%d", b);
	printf("\n");
	return (0);
}