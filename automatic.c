#include<stdio.h>


void func(){
	int x = 10;
	auto int y = 20;
	printf("\tNormal Var: %d \n\tAuto var: %d\n", x,y);
}

int main(){
	func();
	return 0;
}
