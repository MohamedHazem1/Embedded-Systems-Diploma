
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

	int x=0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	printf("You entered %d\n",x);

	return 0;
}


int task13(){
	printf("**********Task 3**********\n");
	printf("This Program to calculate the sum of 2 integer numbers\n");

	int integer1=0,integer2=0,sum=0;
	printf("Enter 2 integers: ");
	fflush(stdin),fflush(stdout);
	scanf("%d %d",&integer1,&integer2);
	sum=integer1+integer2;
	printf("sum=%d\n",sum);

	return 0;
}

int task14(){
	printf("**********Task 4**********\n");
	printf("This Program to calculate the multiplication of float numbers\n");

	float flt1=0,flt2=0;
	printf("Enter 2 floating numbers: ");
	fflush(stdin),fflush(stdout);
	scanf("%f %f",&flt1,&flt2);
	printf("Multiply =%f\n",flt1*flt2);


	return 0;
}

int task15(){
	printf("**********Task 5**********\n");
	printf("This Program to print the ASCI code of the character\n");

	char character;
	printf("Enter any character ");
	fflush(stdin),fflush(stdout);
	scanf(" %c",&character);
	printf("the ASCI value of %c = %d\n ",character,character);

	return 0;
}

int task16_7(){
	printf("**********Examples 6&7**********\n");
	printf("This Program to swap 2 numbers \n");

	float a=0.0,b=0.0;
	printf("Enter value of a= ");
	fflush(stdin),fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b= ");
	fflush(stdout);
	scanf("%f",&b);
	printf("after swapping: a=%f\n",b);
	printf("after swapping: b=%f\n",a);

	return 0;
}


int main(){
	printf("Enter the task you want to run\t");
	fflush(stdout);
	int choice;
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
		task16_7();
		break;
	default:
		printf("Wrong choice");
		break;
}
		return 0;
}



