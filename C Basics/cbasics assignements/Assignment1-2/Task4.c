/*
 * Assignment1-2.c
 *
 *  Created on: Nov 5, 2024
 *      Author: Mohamed Hazem
 */

#include "stdio.h"

int main(){



	printf("This program to know whether the number is +ve , -ve or zero \n\n");
	float x;
	printf("Enter a number\t");
	fflush(stdout);
	scanf("%f",&x);
	if(x>0){printf("%f is Positive number",x);}
	else if(x<0){printf("%f is Negative number",x);}
	else printf("You entered a Zero");

    return 0;
}