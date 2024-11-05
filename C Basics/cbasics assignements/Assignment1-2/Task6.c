/*
 * Assignment1-2.c
 *
 *  Created on: Nov 5, 2024
 *      Author: Mohamed Hazem
 */

#include "stdio.h"

int main(){
	printf("This program to calculate sum of natural numbers\n\n");
	int x;
	ckpt:
	printf("Enter the max number\t");
	fflush(stdout);
	scanf("%d",&x);
	int sum=0;
	sum=(x*(x+1))/2;
	printf("%d\n",sum);
	goto ckpt;
    return 0;
}