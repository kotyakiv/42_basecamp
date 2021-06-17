#include <stdio.h>
#include <stdlib.h>

char *ft_concat_params(int argc, char **argv);

int main(int argc, char **argv)
{
	char *n;
	n = ft_concat_params(argc, argv);

	if (!n)
		return (0);
	for(int i = 0; n[i]; i++)
		printf("%c", n[i]);
	
	return (0);
}