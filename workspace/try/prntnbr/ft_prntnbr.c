#include <stdio.h>

void ft_putchar(char c)
{
	printf("%c", c);
}

void ft_prnint(int nbr)
{
	char c;

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 10)	
		ft_prnint(nbr/10);
	c = nbr % 10 + '0';
	ft_putchar(c);	
}

int main(void)
{
	int a = 0;
	ft_prnint(a);
	ft_putchar('\n');
	return (0);
}