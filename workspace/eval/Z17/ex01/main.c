#include <stdio.h>

void	ft_putnbr(int nb);
void	ft_foreach(int *tab, int length, void(*f)(int));

int main(void)
{
	int tab[] = {1,2,3,4,5};

	ft_foreach(tab, 5, &ft_putnbr);

	return 0;
}