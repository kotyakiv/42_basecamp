#include <stdio.h>
void	ft_putnbr(int nb);

int main(void)
{
	int a = -2147483648;
	int b = 2183647;
	int c = 0;
	int d = -6;
	/*1931390121$
	1462251518$
	0$
	-2147483648$
	2147483647$
	-987654321
	2147483647
	*/
	ft_putnbr(a);
	printf("\n");
	ft_putnbr(b);
	printf("\n");
	ft_putnbr(c);
	printf("\n");
	ft_putnbr(d);
	printf("\n");
	return (0);
}