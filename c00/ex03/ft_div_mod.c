#include <stdio.h>
#include<unistd.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int main()
{

	int x;
	int y;
	int div;
	int mod;
	
	x = 10;
	y = 3;
	ft_div_mod(x, y, &div, &mod);
	write (1, &div, 1);

}