#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char str[] = "Good morning";
	int index;
	index = ft_strlen(str);
	printf("%d\n", index);
	return (0);
}