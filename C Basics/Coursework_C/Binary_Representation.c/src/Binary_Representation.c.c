/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
void dicimal2binary(int dec);
int main(void) {
	int input;
	printf("Please Enter The decimal number you want to convert\n");
	fflush(stdout); fflush(stdin);
	scanf("%d",&input);
	dicimal2binary(input);
	return 0;
}


void dicimal2binary(int dec){

	int binary[32];
	int i=0;
	while (dec >0){
			binary[i]=dec%2;
			dec =dec/2;
			i++;
	}
	for (int j=i-1;j>=0;--j){
		printf("%d",binary[j]);
	}
	printf("\nThe 4th least bit in the binary representation is %d", binary[3]);
}

