#include <stdio.h>
#include "ft_list.h"

int main()
{
	t_list *a;
	a = NULL;

	int b = 7;
	int *ptr;
	int c = 8;
	
	ft_list_push_front(&a, &b);
	ptr = (int*)a->data;
	printf("%d\n", *ptr);

	ft_list_push_front(&a, &c);
	ptr = (int*)a->data;
	printf("%d\n", *ptr);

	printf("%d\n", ft_list_size(a));
	return 0;
}