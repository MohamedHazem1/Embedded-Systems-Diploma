/*
 * Assignment1-2.c
 *
 *  Created on: Nov 5, 2024
 *      Author: Mohamed Hazem
 */

#include "stdio.h"

int main(){

    printf("This program to check whether the alphabet is vowel\n\n");
	char x;
	printf("Enter an alphabet\t");
	fflush(stdout);
	scanf("%c",&x);
	switch(x){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'o':
		case 'O':
		case 'i':
		case 'I':
		case 'U':
		case 'u':
			printf("This Character is a vowel");
			break;
		default:
			printf("This character is not a vowel");
	}
		return 0;

}
