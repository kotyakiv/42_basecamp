#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	int *n;
	int min = -20;	
	int max = 30;

	n = ft_range(min, max);
	for(int i = 0; i < max -min; i++)
		printf("%d ", n[i]);
	printf("\n");
	return (0);
}