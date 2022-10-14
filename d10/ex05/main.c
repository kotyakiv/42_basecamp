#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int bigger(int a, int b)
{
	return a - b;
}

int main()
{
	int tab[] = {-232996 ,-199326, 352784};
	int a = ft_is_sort(tab, 4, &bigger);

	printf("%d\n", a);
	return 0;
}