#include <stdio.h>

int *ft_map(int *tab, int length, int(*f)(int));
int mult(int a){
	return 2*a;
}
int main()
{
	int tab[] = {1, 2, 3, 0, 4};
	int *new;

	new = ft_map(tab, 4, &mult);
	if (!new)
		printf("It's empty\n");


	for(int i = 0; i < 4; i++)
		printf("%d ", new[i]);

	return 0;
}