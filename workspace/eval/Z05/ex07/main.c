














#include <stdio.h>

char *ft_strrev(char *str);

int		main(void)
{
	char str[] = "AAAABBBB";
	printf("%s\n", str);
	printf("%s\n", ft_strrev(str));
	return (0);
}