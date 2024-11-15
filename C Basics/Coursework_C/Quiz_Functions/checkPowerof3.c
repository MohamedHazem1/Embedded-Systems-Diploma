/*
 * checkPowerof3.c
 *
 *  Created on: November 14, 2024
 *      Author: Mohamed Hazem
 */

#include "stdio.h"
#include "math.h"

int powerof3();

int main(){
	int a=9;
	printf("Enter The number you want to check whether its a power of 3 or not\n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&a);
	int x= powerof3(a);
	printf("%d",x);
	return 0;
}

int  powerof3(int a){
	if (a <= 0) {
		return 0;
	}
	while (a % 3 == 0) {
		a /= 3;
	}
	return (a == 1);
}

