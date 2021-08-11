#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c ;
}

int main()
{
	int	a;
	int	b;
   
	a = 21;
   	b = 20;
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d", b);

}
