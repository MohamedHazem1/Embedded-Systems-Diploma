/*
 * indexsearch.c
 *
 *  Created on: Nov 14, 2024
 *      Author: Mohamed
 */

#include "stdio.h"
int arr[]={3,4,5,6,2,6,7,4,8,2,3,5,6,7,8,9,3,2};

int search(int a);
int main(){
	int index=search(2);
	printf("The index is %d", index);
	return 0;
}


int search(int a){
	extern int arr[];
	int index;
	for(int i =0;i<=17;i++){
		if (arr[i]==a){
			index=i;
		}
	}
	return index;
}
