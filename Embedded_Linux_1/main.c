#include <stdio.h>
#include <operation.h>
int main()
{
	int a = 5;
	int b = 10;
	printf("Sum of 2 numbers is: %d\n",add(a,b));
	printf("Sub of 2 numbers is: %d\n",sub(a,b));
	printf("Mul of 2 numbers is: %ld\n",mul(a,b));
	printf("Div of 2 numbers is: %0.2f\n",div(a,b));
	printf("Mod of 2 numbers is: %d\n",mod(a,b));
	return 0;
}
