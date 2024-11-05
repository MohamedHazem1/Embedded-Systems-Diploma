/*
 * Assignment1-2.c
 *
 *  Created on: Nov 5, 2024
 *      Author: Mohamed Hazem
 */

#include "stdio.h"

int main(){
/*		printf("This program to check if the input is even or odd\n\n");
	int x=0;
	checkpoint:
	printf("Enter a number: ");
	fflush(stdin),fflush(stdout);
	scanf("%d",&x);
	(x%2==0?printf("%d is Even\n",x):printf("%d is Odd\n",x));
	goto checkpoint;*/
	/********************************************************************************************/


/*	printf("This program to check whether the alphabet is vowel\n\n");
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
	}*/

		/********************************************************************************************/

		/*	printf("This program to select the largest of 3 numbers\n\n");
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
	}*/
		/********************************************************************************************/
		/*	printf("This program to know whether the number is +ve , -ve or zero \n\n");
	float x;
	printf("Enter a number\t");
	fflush(stdout);
	scanf("%f",&x);
	if(x>0){printf("%f is Positive number",x);}
	else if(x<0){printf("%f is Negative number",x);}
	else printf("You entered a Zero");*/
		/********************************************************************************************/
		/*	printf("This program to know whether the character from the alphabet or not\n\n");
	char x;
	printf("Enter an alphabet\t");
	fflush(stdout);
	scanf("%c",&x);
	if((x>='a'&&x<='z')||(x>='A'&&x<='Z')){
		printf("This %c is from the alphabet",x);
	}else printf("its not an alphabet");*/
		/********************************************************************************************/
		/*	printf("This program to calculate sum of natural numbers\n\n");
	int x;
	ckpt:
	printf("Enter the max number\t");
	fflush(stdout);
	scanf("%d",&x);
	int sum=0;
	sum=(x*(x+1))/2;
	printf("%d\n",sum);
	goto ckpt;*/
		/********************************************************************************************/
		/*	printf("This program to calculate the factorial\n\n");
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
	goto ckpt2;*/
		/********************************************************************************************/

		return 0;

}
