#include<stdio.h>

int main(){
	int x;
	printf("Entre com inteiro:\n");
	scanf("%d",&x);
	
	if(x%2==0){
		printf("par\n");
	}
	else{
		printf("ímpar\n");	
	}
}
