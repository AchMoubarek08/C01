#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	int d;
	c = *a / *b;
	d = *a % *b,
	*a = c;
	*b = d;
}
int main()
{
	int	a;
	int b;
	a = 24;
	b = 4;


	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d", b);
}
