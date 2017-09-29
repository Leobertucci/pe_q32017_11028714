#include<stdio.h>

int main(){
	int x,y,z;
	printf("Entre com 2 inteiros:\n");
	scanf("%d %d",&x, &y);
	z=1;

	while(y>=1){
		z=z*x;
		y-=1;	
	}
	printf("%d\n",z);
	
	return 0;

}
