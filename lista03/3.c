#include <stdio.h>
#include <stdlib.h>

int* somaV(int v1[5],int v2[5]){
	int* v3=malloc(sizeof(int)*5);
	int i = 0;
	while(i<5){
		v3[i]=v1[i]+v2[i];
		i++;
	}
	return v3;
}

int main(){
	int v1[5], v2[5];
	for(int i = 0; i<5;i++){
		scanf("%d", &v1[i]);
	}
	for(int i = 0; i<5;i++){
		scanf("%d", &v2[i]);
	}
	int* v3 = somaV(v1,v2);
	for(int i = 0; i<5;i++){
		printf("%d ", v3[i]);
	}
	free(v3);
		
	return 0;
}
