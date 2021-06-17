#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

int main()
{
	t_list *a;
	a = NULL;

	/*char *b = "Hello";*/
	int d =  10;
	a = ft_create_elem(&d);

	int *c = (int*)(a->data);

	printf("%d\n", *c);

	return 0;
}