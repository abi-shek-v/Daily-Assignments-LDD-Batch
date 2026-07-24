/*Develop a C program that accepts the principal amount, rate of interest, and time period from the user. Calculate both Simple Interest and Compound Interest and display the difference between them.*/

//Simple Interest, Compound Interest, Amount for Compound Interest , Difference, Principal Amount, Rate, Time

#include<stdio.h>
#include<math.h>
int main(){
float SI,CI,A,D;
float PA,R,T; 
printf("Enter the principal amount:");
scanf("%f",&PA);
printf("Enter the Rate:");
scanf("%f",&R);
printf("Enter the Time:");
scanf("%f",&T);
SI=(PA * R * T)/100;
A=PA * pow((1 + (R/100)),T);
CI=A-PA;
D=CI - SI;
printf("The Simple Interest is=%.2f\n",SI);
printf("The Amount of Compound Interest is=%.2f\n",A);
printf("The Compound Interest is=%.2f\n",CI);
printf("The Difference of SI and CI is=%.2f\n",D);
return 0;
}
