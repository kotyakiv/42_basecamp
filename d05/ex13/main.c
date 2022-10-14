#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int		main(void)
{
	char str1[] = "faferAfer";
	/*char str2[] = " - -123";*/
	printf("%d", ft_str_is_lowercase(str1));
	printf("\n");
	return (0);
}