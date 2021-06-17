#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	char src[] = "UIHUEWDHUI213213 O";
	char dest1[80] = "Smth wrong";
	char dest2[80] = "Smth wrong";
	/*char str2[] = " - -123";*/
	printf("%s\n", ft_strncat(dest1, src, 100));
	printf("%s\n", strncat(dest2, src, 100));
	return (0);
}