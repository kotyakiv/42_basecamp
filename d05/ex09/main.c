#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char str1[] = "dAGHHjpfe joD";
	/*char str2[] = " - -123";*/
	printf("%s", ft_strlowcase(str1));
	printf("\n");
	return (0);
}