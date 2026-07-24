/*Write a program to accept marks obtained in five subjects. Calculate the total marks, average marks, 
and percentage scored by the student.*/


#include<stdio.h>
int main(){
int m1,m2,m3,m4,m5;
int totalmarks;
float percentage,average;
printf("Enter the Marks in 5 subjects:");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
totalmarks=m1+m2+m3+m4+m5;
average = totalmarks/5.0;
percentage = (totalmarks/500.0) * 100;
printf("TotalMarks is %d\n",totalmarks);
printf("Average is %.2f\n",average); 
printf("percentage is %.2f\n",percentage);
return 0;
}
