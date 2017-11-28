#include <stdio.h>
#include <math.h>

typedef struct{
	char nome[100];
	int ra;
	float p1;
	float p2;
	float p3;
	float media;
}aluno;

void media(){
	FILE* fp = fopen("lista_alunos.txt","r");
	aluno alunos[50];
	for(int i =0; i<50; i++){
		fscanf(fp,"\%s \%d \%f \%f %f", alunos[i].nome, &alunos[i].ra, &alunos[i].p1, &alunos[i].p2, &alunos[i].p3);
		alunos[i].media = (alunos[i].p1+alunos[i].p2+alunos[i].p3)/3;
	}
	FILE* saida = fopen("media_alunos.txt", "w");
	for(int i =0; i<50; i++){
		fprintf(saida,"\%s \%d \%.2f \%.2f %.2f %.2f\n", alunos[i].nome, alunos[i].ra, alunos[i].p1, alunos[i].p2, alunos[i].p3, alunos[i].media);
	}
	fclose(fp);
	fclose(saida);
}

int main(){
	media();
	return 0;
}
