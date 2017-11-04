#include <stdio.h>
#include <stdlib.h>

void Repetidos(int* v, int n){
	int** cont = malloc(sizeof(int*)*2);
	cont[0]= malloc(sizeof(int)*n);//guarda os números de v sem repetir
	cont[1]= malloc(sizeof(int)*n);//número repetições
	int k = 0;
	for(int i =0; i<n; i++){
		int repetido = 0;//bool marca se v[i] é repetido
		for(int j =0; j<k; j++){
			if(v[i]==cont[0][j]){
				cont[1][j]++;
				repetido = 1;
			}
		}
		if(!repetido){
			cont[0][k]=v[i];
			k++;
		}
	}
	
	for(int i =0; i<k; i++){
		if(cont[1][i]) printf("%d-%d ",cont[0][i],cont[1][i]+1);
	}
	
	free(cont[0]);
	free(cont[1]);
	free(cont);
}

int main(){
	int n;
	scanf("%d",&n);
	int* v=malloc(sizeof(int)*n);
	for(int i =0; i<n; i++){
		scanf("%d",&v[i]);//v+i
	}
	Repetidos(v,n);

	return 0;
}

