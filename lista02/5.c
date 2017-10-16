#include <stdio.h>
#include <math.h>

unsigned int fatorial(unsigned int n){
	unsigned int m=1;
	for(int i = n; i>0;i--){
		m*=i;
	}
	return m;
}

unsigned int binomial(unsigned int n,unsigned int k){
	return fatorial(n)/(fatorial(k)*fatorial(n-k));
}

int main(){
	
	int n,k;
	scanf("%d %d",&n,&k);
	printf("%d\n",binomial(n,k));
	
	return 0;
}
