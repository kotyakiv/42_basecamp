#include <unistd.h>
#include <stdio.h>
# include <fcntl.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
void ft_readchar(char c)
{
	
}

int main(void)
{
	

	

	return 0;
}