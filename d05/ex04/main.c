#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char str[] = " - -123f2 3";
	char str2[20];
	char test1[256] = "asdf";
	char test2[256] = "asdf";
	char test3[256] = "asdf";
	ft_strncpy(str2, str, 5);
	printf("%s\n", str2);
	printf("%s\n", ft_strncpy(test1, "uiop", 5));
	printf("%s\n", ft_strncpy(test2, "qwerty", 4));
	printf("%s\n", ft_strncpy(test3, "z", 1));
	/*"uiop\nqwer\nzsdf\n*/
	return (0);
}