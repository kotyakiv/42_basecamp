









#include <stdio.h>
#include <stdlib.h>

char	**ft_split_whitespaces(char *str);

int main(void)
{
	char str[] = "     Hello   I\tknow\nwhat\rit is.";
	char **n;
	n = ft_split_whitespaces(str);

	for(int i = 0; n[i] != 0; i++)
		printf("%s\n", n[i]);
	
	return (0);
}