
/*

 * main.c
 *
 *  Created on: Nov 5 2024
 *      Author: Mohamed Hazem*/

 
#include "stdio.h"
void task11(){
    /*Task 1*/
	printf("**********Task 1**********\n");
	printf("C programming \n");
}
int task12(){
	printf("**********Task 2**********\n");
	printf("This Program to print the entered integer\n");

	int task12=0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&task12);
	printf("You entered %d\n",task12);
	return 0;
}

int task13(){
	printf("**********Task 3**********\n");
	printf("This Program to calculate the sum of 2 integer numbers\n");

	int task13_integer1=0,task13_integer2=0,task13_sum=0;
	printf("Enter 2 integers: ");
	fflush(stdin),fflush(stdout);
	scanf("%d %d",&task13_integer1,&task13_integer2);
	task13_sum=task13_integer1+task13_integer2;
	printf("sum=%d\n",task13_sum);
	return 0;
}
int task14(){
	printf("**********Task 4**********\n");
	printf("This Program to calculate the multiplication of float numbers\n");

	float task14_flt1=0,task14_flt2=0;
	printf("Enter 2 floating numbers: ");
	fflush(stdin),fflush(stdout);
	scanf("%f %f",&task14_flt1,&task14_flt2);
	printf("Multiply =%f\n",task14_flt1*task14_flt2);
	return 0;
}
int task15(){
	printf("**********Task 5**********\n");
	printf("This Program to print the ASCI code of the character\n");

	char task15_character;
	printf("Enter any character ");
	fflush(stdin),fflush(stdout);
	scanf(" %c",&task15_character);
	printf("the ASCI value of %c = %d\n ",task15_character,task15_character);
	return 0;
}

int task16(){
	printf("**********Examples 6&7**********\n");
	printf("This Program to swap 2 numbers \n");

	float task16_a=0.0,task16_b=0.0;
	printf("Enter value of a= ");
	fflush(stdin),fflush(stdout);
	scanf("%f",&task16_a);
	printf("Enter value of b= ");
	fflush(stdout);
	scanf("%f",&task16_b);
	printf("after swapping: a=%f\n",task16_b);
	printf("after swapping: b=%f\n",task16_a);

	return 0;
}

int main(){
	printf("Enter the task you want to run\t");
	int choice=0;
	fflush(stdout);
	scanf("%d",&choice);
	switch (choice){
	case 1:
		task11();
		break;
	case 2:
		task12();
		break;
	case 3:
		task13();
		break;
	case 4:
		task14();
		break;
	case 5:
		task15();
		break;
	case 6:
		task16();
		break;
	default:
		printf("Wrong Choice Terminating the program!!");
	}
	return 0;
}