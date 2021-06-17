#include <stdio.h>
#include "ft_list.h"

t_list			*ft_create_elem(void *data);
void 			ft_list_push_back(t_list **begin_list, void *data);

int main()
{
	t_list *a;
	a = NULL;

	char *b = "First";
	a = ft_create_elem(b);


	char *c = "Second";

	ft_list_push_back(&a, c);

	a = a->next;

	c = (char *)a->data;
	printf("%s\n", c);
	return 0;
}