#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int nbr;
	nbr  = 5752875;
	ft_ft(&nbr);
	printf("%d", nbr);
}
