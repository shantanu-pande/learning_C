#include<stdio.h>

int main(){
    int flag=1, count=0;
    float average=0, sum=0, input=0;    

    while(flag == 1){
        printf("Values for avrage [to exit enter 0]: ");
        scanf("%f", &input);

        if (input == 0){
            average = sum/count;
            flag = 0; }
        else{
            sum = sum + input;
            ++count;
        }
    }
    printf("Average is : %f", average);

    return 0;
}