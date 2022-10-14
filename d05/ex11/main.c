#include <stdio.h>

int	ft_str_is_alpha(char *str);

int		main(void)
{
	char str1[] = "AFD dwe";
	/*char str2[] = " - -123";*/
	printf("%d", ft_str_is_alpha(str1));
	printf("\n");
	return (0);
}