#include<stdio.h>

static int var;
void func()
{
	var=20;
	int var1=25;
	printf("\tStatic: %d \n \tNormal: %d", var, var1);
}

int main()
{
	func();
	printf("\n\tStatic:%d\n", var);
	return 0;
}
