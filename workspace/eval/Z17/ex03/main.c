#include <stdio.h>

int ft_any(char **tab, int(*f)(char*));

int	zero(char *a){
	int i = 0;
	while (a[i])
		if (a[i++] == '0')
			return 1;
	return 0;
}

int main()
{
	char *str[] = {"Hello", "agent07"}; 

	if (ft_any(str, &zero))
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}