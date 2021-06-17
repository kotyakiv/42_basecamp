#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char str1[] = "dsfHjpfe joD";
	/*char str2[] = " - -123";*/
	printf("%s", ft_strupcase(str1));
	printf("\n");
	return (0);
}