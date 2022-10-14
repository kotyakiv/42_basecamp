#include <stdio.h>
#include "ft_list.h"

int main()
{
	t_list *a;
	a = NULL;

	int b = 999;
	int c = 1;
	int *ptr;

	
	ft_list_push_front(&a, &b);
	ptr = (int*)a->data;
	printf("%d\n", *ptr);

	ft_list_push_front(&a, &c);
	
	a = a->next;
	
	ptr = (int*)a->data;
	printf("%d\n", *ptr);

	return 0;
}