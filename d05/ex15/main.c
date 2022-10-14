#include <stdio.h>

int	ft_str_is_printable (char *str);

int		main(void)
{
	char str1[] = "UIHUEWDHUI213213 O";
	/*char str2[] = " - -123";*/
	printf("%d", ft_str_is_printable(str1));
	printf("\n");
	return (0);
}