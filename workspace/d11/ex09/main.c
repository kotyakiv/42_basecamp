#include <stdio.h>
#include "ft_list.h"

void funct(void *a)
{
	*a += 1;
}

void ft_list_foreach(t_list *begin_list, void (*f)(void *));
void			ft_list_push_front(t_list **begin_list, void *data);
int main(void)
{
	t_list *a;
	t_list *temp;
	char *c;
	char b[] = "hello";
	a = NULL;
	
	ft_list_push_front(a, b);


	c = (char*)temp->data;
	printf("%s\n", c);

	return 0;
}