#include <stdio.h>
#include "ft_list.h"

int main(int argc, char **argv)
{
	t_list *a;
	t_list *temp;
	char *c;
	a = NULL;

	a = ft_list_push_params(argc, argv);
	if (!a){
		printf("No argumnets\n");
		return 0;
	}
	temp = a;
	c = (char*)temp->data;
	printf("%s\n", c);

	return 0;
}