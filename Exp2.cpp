#include <iostream>
#include <math.h>

int main (){

    float  P , R , T , SI , CI , ammount ;
    
    printf("ENter the Principle Ammount:");
    scanf("%f",&P);

    printf("Enter The Rate of Intrest:");
    scanf("%f",&R);

    printf("Enter The Time:");
    scanf("%f",&T);

    SI = (P * R * T) / 100;


    ammount = P * pow((1 + R / 100), T);
    CI = ammount - P;

    printf("Simple Intrest is : %.2f\n",SI);
    printf("Compund Intrest is : %.2f\n",CI);
    return 0;
}