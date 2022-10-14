#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a = 5, b = 2;
	
	printf("%d\t%d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d\t%d\n", a, b);


	return (0);
}