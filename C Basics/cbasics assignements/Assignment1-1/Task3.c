
/*

 * main.c
 *
 *  Created on: Nov 5 2024
 *      Author: Mohamed Hazem*/


#include "stdio.h"
int main(){
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



