#include <stdio.h>

int ft_count_if(char **tab, int(*f)(char*));

int	zero(char *a){
	int i = 0;
	while (a[i])
		if (a[i++] == '0')
			return 1;
	return 0;
}

int main()
{
	char *tab[] = {"agent0", "102", "0", "", "edmfief"};
	int a = ft_count_if(tab, &zero);
	printf("%d\n", a);
	return 0;
}