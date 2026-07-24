/* Write a program to read the temperature in Celsius and convert it into Fahrenheit and Kelvin 
using the standard conversion formulas. Display all three values.*/
/*
#include<stdio.h>
int main(){
float fahrenheit,celsius,kelvin;
printf("Enter the celsius value:");
scanf("%f",&celsius);
fahrenheit = (9.0 / 5.0) * celsius + 32;
kelvin = celsius + 273.15;
printf("The Celsius value is %f\n",celsius);
printf("The Fahrenheit value is %f\n",fahrenheit);
printf("The Kelvin value is %f\n",kelvin);
return 0;
}
*/
/* Write a program to read the temperature in Fahrenheit  and convert it into Celsius and Kelvin 
using the standard conversion formulas. Display all three values.*/

#include<stdio.h>
int main(){
float fahrenheit,celsius,kelvin;
printf("Enter the fahrenheit value:");
scanf("%f",&fahrenheit);
celsius = (fahrenheit - 32) * 5.0 / 9.0;
kelvin = celsius + 273.15;
printf("The Fahrenheit value is %f\n",fahrenheit);
printf("The Celsius value is %f\n",celsius);
printf("The Kelvin value is %f\n",kelvin);
return 0;
}


