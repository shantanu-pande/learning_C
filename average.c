#include<stdio.h>

int main()
{
	float sum=0;
	int n;
	
	printf("Total numbers: ");
	scanf("%d", &n);
	
	printf("Enter %d numbers\n", n);
	for (int i=n;i>0;i--)
	{
		float inp;
		scanf("%f", &inp);
		sum += inp;
	}
	printf("Average is: %f\n", sum/n);	
}	
