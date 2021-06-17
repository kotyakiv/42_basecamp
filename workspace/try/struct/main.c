#include <stdio.h>
#include <stdlib.h>

typedef	struct s_list
{

	struct s_list 	*next;
	void 			*data;

}	t_list;


t_list *ft_create_elem(void *data)
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));
	if (new)
	{
		new->next = NULL;
		new->data = data;
	}
	return (new);
}




void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;
	t_list *temp;

	new = ft_create_elem(data);

	temp = *begin_list;

	while (temp->next)
		temp = temp->next;

	temp->next = new;
}



int main()
{
	t_list* a;

	int d = 10;
	int e = 15;
	int f = 20;
	int* b;

	a = ft_create_elem(&d);
	ft_list_push_back(&a, &e);
	ft_list_push_back(&a, &f);


	b = (int*)a->data;
	printf("%d\n", *b);

	return 0;
}