#include <stdio.h>

void ft_sub(int *ptr, int number)
{
	*ptr -= number;
}

int main(void) 
{
	int a = 10;
	int b = 3;

	ft_sub(&a, b);

	printf("Success %d\n", a);

	return (0);
}
