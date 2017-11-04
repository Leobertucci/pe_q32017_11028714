#include <stdio.h>
#include <stdlib.h>

void transposta(int matriz[3][3], int transp[3][3]){
	for(int i = 0; i<3;i++){
			for(int j = 0; j<3;j++){
				transp[i][j]=matriz[j][i];
				//printf("%d ", transp[i][j]);
			}
	}
}

int main(){
	int matriz[3][3];
	for(int i = 0; i<3;i++){
			for(int j = 0; j<3;j++){
				scanf("%d", &matriz[i][j]);
			}
	}

	int transp[3][3];
	transposta(matriz,transp);
	for(int i = 0; i<3;i++){
			for(int j = 0; j<3;j++){
				printf("%d ", transp[i][j]);
			}
			printf("\n");	
	}
		
	return 0;
}
