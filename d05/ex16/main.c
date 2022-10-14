#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char src[] = "UIHUEWDHUI213213 O";
	char dest1[80] = "Smth wrong";
	char dest2[80] = "Smth wrong";
	/*char str2[] = " - -123";*/
	printf("%s\n", ft_strcat(dest1, src));
	printf("%s\n", strcat(dest2, src));
	return (0);
}