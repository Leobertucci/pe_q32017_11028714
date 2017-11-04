#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void*a, const void*b ) {
	return (*(int*)a - *(int*)b );
}

float mediana (int* v, int n){
	qsort(v, n, sizeof(int), cmpfunc);
	if(n%2) return v[(n-1)/2];
	else return ((float)(v[n/2]+v[(n-2)/2]))/2.0;
}

int main(){
	int n;
	scanf("%d",&n);
	int* v=malloc(sizeof(int)*n);
	for(int i =0; i<n; i++){
		scanf("%d",v+i);//&v[i]
	}
	printf("%.2f\n", mediana(v,n));

	return 0;
}

