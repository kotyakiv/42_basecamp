#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a = 10, b = 3, c, d;
	int* div = &c;
	int* mod = &d;
	ft_div_mod(a, b, div, mod);
	printf("%d\n%d\n", *div, *mod);

	return (0);
}