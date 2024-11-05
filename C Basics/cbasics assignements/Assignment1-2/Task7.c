/*
 * Assignment1-2.c
 *
 *  Created on: Nov 5, 2024
 *      Author: Mohamed Hazem
 */

#include "stdio.h"

int main(){
	printf("This program to calculate the factorial\n\n");
	int  x,i=1;
	int factorial=0;
	ckpt2:
	printf("	Enter a number to calculate its factorial\t");
	fflush(stdout);
	scanf("%d",&x);
	if (x<0){
		printf("Error!!! You entered a negative number\n");
	}else if (x==0){
		printf("Factorial of Zero = 1\n");
	}else
	{
		for (i=1;i<=x;i++)
		{
			factorial*=i;
		}
		printf("The factorial = %d\n",factorial);
	}
	goto ckpt2;
	return 0 ;
}