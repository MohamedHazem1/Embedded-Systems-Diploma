/*
 * Assignment1-2.c
 *
 *  Created on: Nov 5, 2024
 *      Author: Mohamed Hazem
 */

#include "stdio.h"

int task1(){
	printf("This program to check if the input is even or odd\n\n");
	int x=0;
	checkpoint:
	printf("Enter a number: ");
	fflush(stdin),fflush(stdout);
	scanf("%d",&x);
	(x%2==0?printf("%d is Even\n",x):printf("%d is Odd\n",x));
	goto checkpoint;
	return 0;

}
