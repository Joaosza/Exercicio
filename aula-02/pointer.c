#include <stdio.h>

int main ()
{
	int a, b, c;
	int *p;
	
	p = &a;
	a = 10;
	*p = 99;
	
	*(&a) = 100;
	b = 9;
	c = 88;
	
	scanf("%i", &c);
	
	printf("ola %u %i %i %p\n", *p, b, c, &b);

	return 0;
}
