#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2;
	int a, b, c, d, e;
	
	printf("enter two integer : ");
	scanf ("%d%d", &num1, &num2);
	
	a = num1 + num2;
	b = num1 - num2;
	c = num1 * num2;
	d = num1 / num2;
	e = num1 % num2;
	
	printf("+ result is : %d\n", a);
	
	printf("- result is : %d\n", b);
	
	printf("* result is : %d\n", c);
	
	printf("/ result is : %d\n", d);
	
	printf("%% result is : %d\n", e);
	
	return 0;
}
