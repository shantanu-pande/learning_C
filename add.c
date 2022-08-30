/*
Date    : 30-08-2022
Author  : iam7t9
About   : adds two number
*/

#include<stdio.h>

int main(){

    float a,b,sum;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    sum = a+b;
 
    printf("Sum is: %f\n", sum);
    return 0;

}