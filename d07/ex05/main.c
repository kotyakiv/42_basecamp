








#include <stdio.h>
#include <stdlib.h>

char	**ft_split_whitespaces(char *str);
void ft_print_words_tables(char **tab);

int main(void)
{
	char str[] = "Hello I\tknow\nwhat\ris it?";
	char **n;
	n = ft_split_whitespaces(str);
	ft_print_words_tables(n);
	return (0);
}