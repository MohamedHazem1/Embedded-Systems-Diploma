/*
 * Assignment1-2.c
 *
 *  Created on: Nov 5, 2024
 *      Author: Mohamed Hazem
 */

#include "stdio.h"

int main(){
	printf("This program to select the largest of 3 numbers\n\n");
	float x,y,z;
	printf("Enter 3 numbers\t");
	fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);
	if (x>y){
		if(x>z){
			printf("the largest number = %f",x);
		}else printf("the largest number = %f",z);
	}else {
		if (z>y){
			printf("the largest number = %f",z);
		}else printf("the largest number = %f",y);
	}
    return 0;
}