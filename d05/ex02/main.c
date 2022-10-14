#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int		main(void)
{
	printf("%d\t", ft_atoi("+4899")); printf("%d\n", atoi("+4899"));
	printf("%d\t", ft_atoi("  456")); printf("%d\n", atoi("  456"));
	printf("%d\t", ft_atoi("5464848498489484884")); printf("%d\n", atoi("5464848498489484884"));
	printf("%d\t", ft_atoi("+4899")); printf("%d\n", atoi("+4899"));
	printf("%d\t", ft_atoi("-0")); printf("%d\n", atoi("-0"));
	printf("%d\t", ft_atoi("fd45fd")); printf("%d\n", atoi("fd45fd"));
	printf("%d\t", ft_atoi("324fe234")); printf("%d\n", atoi("324fe234"));
	printf("%d\t", ft_atoi("\t43")); printf("%d\n", atoi("\t43"));
	printf("%d\t", ft_atoi("\t-43")); printf("%d\n", atoi("\t-43"));
	printf("%d\t", ft_atoi("\n43")); printf("%d\n", atoi("\n43"));
	printf("%d\t", ft_atoi("\r43")); printf("%d\n", atoi("\r43"));
	printf("%d\t", ft_atoi("\v43")); printf("%d\n", atoi("\v43"));
	printf("%d\t", ft_atoi("\f43")); printf("%d\n", atoi("\f43"));
	printf("%d\t", ft_atoi("++43")); printf("%d\n", atoi("++43"));
	printf("\n");
	return (0);
}