/*Write a C program to accept the length and breadth of a rectangle from the 
user and calculate its area as well as perimeter. Display the results with appropriate labels.*/

#include<stdio.h>
int main(){
int length,breadth,area,perimeter;
printf("Enter the Length and Breadth of Rectangle:");
scanf("%d %d",&length,&breadth);
area = length * breadth;
perimeter = 2 * (length + breadth);
printf("The area of the Rectangle is = %d\n",area);
printf("The Perimeter of the Rectangle is = %d\n",perimeter);
return 0;
}
