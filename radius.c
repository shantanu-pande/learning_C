#include <stdio.h>
#define pi 3.14;

int main(){
	float r;
	printf("Just Give Radius: ");
	scanf("%f", &r);
	
	float area = pi*r*r;
	float circum = 2*pi*r;
	
	float volume = (4/3)*pi*r*r*r;
	float surArea = 4*pi*r*r;
	
	printf("\nFor Circle :\n\nArea of Circle:\t\t\t%f\nCircumference of Circle:\t%f\n\nFor Sphere:\n\nVolume of Sphere:\t\t%f\nSurface Area Of Sphere:\t\t%f\n",area,circum,volume,surArea);
}
