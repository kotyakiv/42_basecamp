#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char src1[] = "123f2 3";
	char src2[] = "123f2 3";
	char str2[2];
	char str3[2];

	/*printf("%s\n", ft_strcpy(str2, src1));*/
	printf("%s\n", strcpy(str3, src2));

	return (0);
}