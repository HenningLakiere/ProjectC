#include <stdio.h>

int main(){

	int a,b;

	printf("Inputs A and B\n");	
	scanf("%d", &a);
	scanf("%d", &b);

	printf("add = %d\n", a+b);
	printf("sub = %d\n", a-b);
	printf("mul = %d\n", a*b);
	printf("div = %d\n", a/b);
	printf("mod = %d\n", a%b);
	
	if(a==b){
		printf("%d equals %d\n", a, b);
	}
	else if(a>b){
		printf("%d is larger than %d\n", a, b);
	}
	else if(a<b){
		printf("%d is smaller than %d\n", a, b);
	}
	else{
		printf("something is wrong");
	}



}
