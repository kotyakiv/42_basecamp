#include <stdio.h>

int	ft_str_is_uppercase (char *str);

int		main(void)
{
	char str1[] = "UIHUEWDHUIO";
	/*char str2[] = " - -123";*/
	printf("%d", ft_str_is_uppercase(str1));
	printf("\n");
	return (0);
}