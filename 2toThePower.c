#include<stdio.h>

int main(){
	long int p=1;
	int n=0;
	double a;
	
	printf("___________________________________________\n");
	printf("2_to_power_n\t    n\t    2_to_power_-n\n");
	printf("___________________________________________\n");
	
	for(;n<21;++n){
		if(n==0) p=1;
		else {
		p *= 2;
		a = 1/(double)p;
		printf("%10ld %10d %20.12lf\n",p,n,a);
		}
	} 
	printf("___________________________________________\n");
	return 0;
}
