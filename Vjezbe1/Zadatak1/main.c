#include <stdio.h>

<<<<<<< HEAD
void PrintResult(int res)
{
	printf("Result: %d\n", res);
=======
int Calculation(int a, int b);
{
	if(a > b)
		return a - b;
	else
		return b - a;
>>>>>>> branch1
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