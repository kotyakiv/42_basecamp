#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	/*char str2[] = " - -123";*/
	printf("%s", ft_strcapitalize(str1));
	printf("\n");
	return (0);
}