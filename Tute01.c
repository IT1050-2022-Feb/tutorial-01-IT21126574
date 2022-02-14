/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>

int main(void)//Have to calculate the sum and average
{
	int mark1,mark2,total_marks;
	float avg;
	
	
	printf("Enter mark one:");//input marks one
	scanf("%d",&mark1);
	
	printf("Enter mark Two:");//input mmarks two
	scanf("%d",&mark2);
	
	total_marks=mark1 + mark2;//Calculate total
	
	printf("Your Total marks is %d\n",total_marks);//display the total marks
	
	avg=(float)total_marks / 2;
	
	printf("Average of the above marks is : %.2f\n",avg);//print average marks
	
	return 0;
	
}


