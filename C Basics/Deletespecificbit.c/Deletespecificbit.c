#include <stdio.h>
#include <stdlib.h>

void mod_bit();

int main(void) {
	mod_bit();
	return 0;
}

void mod_bit(){
	int a;	int n;
	printf("Enter The number you want to modify\n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&a);
	printf("Enter The bit you want to delete\n");
	fflush(stdout);(stdin);
	scanf("%d",&n);
	a&=~(1<<n);
	printf("%d",a);
}
