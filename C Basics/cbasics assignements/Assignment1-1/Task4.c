
/*

 * main.c
 *
 *  Created on: Nov 5 2024
 *      Author: Mohamed Hazem*/


#include "stdio.h"
int main(){
	printf("**********Task 4**********\n");
	printf("This Program to calculate the multiplication of float numbers\n");

	float flt1=0,flt2=0;
	printf("Enter 2 floating numbers: ");
	fflush(stdin),fflush(stdout);
	scanf("%f %f",&flt1,&flt2);
	printf("Multiply =%f\n",flt1*flt2);


	return 0;
}



