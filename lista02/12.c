#include<stdio.h>
#include<math.h>


int Binomial(int n, int k){
	if(k==0 || k==n) return 1;
	return Binomial(n-1,k-1)+Binomial(n-1,k);
}

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	printf("%d\n",Binomial(n,k));

	return 0;
}
