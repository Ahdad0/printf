#include "ft_printf.h"

int main()
{
	int p = 9;
	int a = ft_printf("\nadd=%p\n", &p);
	printf("\nadd=%p\n", &p);
	printf("");


	printf("\nlen=%d\n", a);
}
