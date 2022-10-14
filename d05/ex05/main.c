#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "pprivet";
	printf("%s\n", ft_strstr(str, "privet"));
	printf("%s\n", strstr(str, "privet"));

	return (0);
}
