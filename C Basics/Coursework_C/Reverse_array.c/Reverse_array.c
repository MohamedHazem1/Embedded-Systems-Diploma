#include "stdio.h"

void reverse_array(void);

int main(){
	reverse_array();
	return 0;
}

void reverse_array(void){
	int a[]={1,2,3,4,5,6};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
}

