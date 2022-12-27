#include<stdio.h>

int main(){
	float r;
	const float pi = 3.14
	printf("Just Give Radius: ");
	scanf("%f", &r);
	
	float area = pi*r*r;
	float circum = 2*pi*r;
	
	float volume = (4/3)*pi*r*r*r;
	float surArea = 4*pi*r*r;
	
	printf("For Circle :\nArea of Circle:\t\t%f\nCircumference of Circle:\t%f\n\nFor Sphere: \nVolume of Sphere:\t\t%f\nSurface Area Of Sphere:\t\t%f",area,circum,volume,surArea);
}
