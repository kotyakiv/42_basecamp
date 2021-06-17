#include <stdio.h>

void	ft_putnbr1(int nb)
{
	printf("%d ", nb);
}

void	ft_putnbr2(int nb)
{
	printf("%d\n", nb);
}

void	ft_putnbr3(int nb)
{
	printf("%d Alloha", nb);
}

void	ft_foreach(int *tab, int length, void(*f)(int));

int main(void)
{
	int tab[] = {1,2,0,4,5}; 

	ft_foreach(tab, 5, &ft_putnbr1);
	printf("\n");
	return 0;
}