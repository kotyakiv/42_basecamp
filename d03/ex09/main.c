#include <stdio.h>

void ft_sort_integer_table(int *tab, int size);

int		main(void)
{
	int arr[] = { 543, 48,45, 59, -14, -9, 15, 5, -59, 5};
	int n = 10;
	int i = 0;

	ft_sort_integer_table(arr, n);

	while (i < n) 
	{
		printf("%d", arr[i]);
		printf("\n");
		i++;
	}

	return (0);
}