#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char str1[] = "12345678";
	char str2[] = "1234567";
	printf("%d\n", ft_strncmp(str1, str2, 30));
	printf("%d\n", strncmp(str1, str2, 30));
	return (0);
}