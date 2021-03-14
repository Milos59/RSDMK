#include <stdio.h>

void PrintResult(int res)
{
	printf("Result: %d\n", res);
}

int main()
{
	int a = 3;
	int b = 8;
	int c;

	c= Calculation(a, b);

	PrintResult(c);

	
	return 0;
}