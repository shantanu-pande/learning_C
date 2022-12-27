#include<stdio.h>

int main(){
	int days = 0;
	printf("Enter Days: ");
	scanf("%d", &days);
	
	printf("\n  Days:\t\t%d\n  Weeks:\t%d + (%d days)\n  Months:\t%d + (%d weeks) + (%d days)\n  Years:\t%d\n ", days, days/7, days%7, days/30, (days%30)/7, (days%30)/7 days/365);
}
