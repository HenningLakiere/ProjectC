#include <stdio.h>

int main(){

	
	//gets/puts = for chars/strings

	char b[100];

	printf("input with gets, B = ");
	gets(b);
	printf("\noutput with puts, B = ");
	puts(b);

	int a;
	
	//scanf = for all data types

	printf("Input with scanf, A = ");
	scanf("%d", &a);
	printf("Given input with scanf = %d\n", a);
}
