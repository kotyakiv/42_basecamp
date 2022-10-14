#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

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