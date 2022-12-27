#include<stdio.h>


int main(){
    float R, P, N;
    printf("Enter Ammount: ");
    scanf("%f", &P);
    printf("Enter rate: ");
    scanf("%f", &R);
    printf("Enter Period[in Years]: ");
    scanf("%f", &N);
    
    int isCompound;
    printf("[0] for Simple | [1] for Compound:  ");
    scanf("%i", &isCompound);

    if (isCompound){
        for (int y=1; N>=y; y++){
        float I = P*N*y/100;
        printf("Compound Intrest for %i Years is : %f\n",y, I);
        P += I;
        }
    }
    else {
        for (int y=1; N>=y; y++){
            float I = P*N*y/100;
            printf("Simple Intrest for %i Years is : %f\n",y, I);
        }
    }
    return 0;
}