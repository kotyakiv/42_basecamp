#include <stdio.h>

int	ft_str_is_numeric(char *str);

int		main(void)
{
	char str1[] = "3242343";
	/*char str2[] = " - -123";*/
	printf("%d", ft_str_is_numeric(str1));
	printf("\n");
	return (0);
}