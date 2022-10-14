#include <stdio.h>
#include "ft_btree.h"

int	cmpf(void *a, void *b)
{
	if ((int)a > (int)b)
		return 1;
	if ((int)a < (int)b)
		return -1;
	return 0;
}

void read_tree(t_btree *tree)
{
	int a;
	a = *(int*)tree->item;
	printf("%d\n", a);
}

int main(void)
{
	t_btree *tree;

	int a = 5;
	int b = 7;
	int c = 1;
	int d = 18;

	tree = NULL;
	btree_insert_data(&tree, &a, cmpf);
	btree_insert_data(&tree, &b, cmpf);
	btree_insert_data(&tree, &c, cmpf);
	btree_insert_data(&tree, &d, cmpf);
	read_tree(tree);
	return (0);
}