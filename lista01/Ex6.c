#include<stdio.h>

int main(){
	int x,y;
	printf("Entre com um inteiro:\n");
	scanf("%d",&x);
	y=1;

	for(int i = x; i>=1;i--){
		y = y*i;
	}
	printf("%d\n",y);
	
	return 0;

}
