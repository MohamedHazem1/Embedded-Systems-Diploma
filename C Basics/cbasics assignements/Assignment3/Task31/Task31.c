/*
 * Task31.c
 *
 *  Created on: Nov 14, 2024
 *      Author: Mohamed Hazem
 */

#include "stdio.h"

int main(){
	printf("---------This Program to calculate the sum of multidimensional matrices---------\n\n");
	int a[2][2];
	int b[2][2];
	int sum[2][2];

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("Enter a[%d][%d]=\t",i,j);
			fflush(stdout);fflush(stdin);
			scanf("%d",&a[i][j]);
		}
	}
	printf("-------------------\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("Enter b[%d][%d]=\t",i,j);
			fflush(stdout);fflush(stdin);
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Sum is \n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d	",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
