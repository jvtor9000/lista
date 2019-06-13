#include <stdio.h>
void main(){
	int num;
	printf("digite um numero:\n");
	scanf("%d",&num);
	
	if((num>=0) && (num%2==0)){
		printf("o numero é par\n");
	}
		else
			printf("o numero é impar\n");
}
