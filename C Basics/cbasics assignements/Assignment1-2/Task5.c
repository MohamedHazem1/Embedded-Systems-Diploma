/*
 * Assignment1-2.c
 *
 *  Created on: Nov 5, 2024
 *      Author: Mohamed Hazem
 */

#include "stdio.h"

int main(){

    printf("This program to know whether the character from the alphabet or not\n\n");
	char x;
	printf("Enter an alphabet\t");
	fflush(stdout);
	scanf("%c",&x);
	if((x>='a'&&x<='z')||(x>='A'&&x<='Z')){
		printf("This %c is from the alphabet",x);
	}else printf("its not an alphabet");

    return 0 ;
}