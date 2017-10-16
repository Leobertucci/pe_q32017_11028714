#include <stdio.h>

long int potencia(int x, unsigned int y){
	if (y==1) return x;
	return x*potencia(x,y-1);
}

int main(){
  
	int x,y;
	scanf("%d %d", &x, &y);
	printf("%ld\n",potencia(x,y));

	return 0;
}
