#include <unistd.h>
#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int div;
	int mod;
	ft_div_mod(10, 5, &div, &mod);
	printf("%d\n", div);
	printf("%d", mod);


}
