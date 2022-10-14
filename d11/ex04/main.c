#include <stdio.h>
#include "ft_list.h"

int main()
{
	t_list *a;
	t_list *temp;
	a = NULL;

	int *ptr;
	int b = 7;
	int c = 10;
	int d = 99;

	ft_list_push_front(&a, &b);
	ptr = (int*)a->data;
	printf("%d\n", *ptr);

	ft_list_push_front(&a, &c);
	ptr = (int*)a->data;
	printf("%d\n", *ptr);
	
	ft_list_push_front(&a, &d);
	ptr = (int*)a->data;
	printf("%d\n", *ptr);

	temp = ft_list_last(a);
	printf("Pointer to the last\n");
	ptr = (int*)temp->data;
	printf("%d\n", *ptr);
	return 0;
}