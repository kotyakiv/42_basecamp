







#include <stdio.h>
#include <stdlib.h>
int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int size;
	int *n;
	int min = 0;	
	int max = 20;

	size = ft_ultimate_range(&n, min, max);
	printf("%p\n", n);
	printf("%d\n", size);
	if (size > 0)
		for(int i = 0; i < size; i++)
			printf("%d\n", n[i]);
	
	return (0);
}