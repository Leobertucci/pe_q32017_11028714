#include <stdio.h>
#include <math.h>

float ConversaoTemp(int in, int out, float valor){
	if(in==out){
		return valor;
	}
	else if(in == 1){
		if(out==2) return valor*1.8+32;
		return valor+273;
	}
	else if(in == 2){
		if(out==1) return (valor-32)/1.8;
		return (valor-32)/1.8 +273;
	}
	else if(in == 3){
		if(out==1) return valor -273;
		return (valor-273)*1.8+32;

	}
}

long int ConversaoBin(int in, int out, int valor){
	if(in==out){
		return valor;
	}
	else if(in == 1){
		long int result = 0;
		int i = 0;
		while(valor!=0){
			result+=pow(10,i)*(valor%2);
			valor/=2;
			i++;
		}
		return result;
	}
	else if(in ==2){
		int result = 0;
		int i = 0;
		while(valor!=0){
			result+=pow(2,i)*(valor%10);
			valor/=10;
			i++;
		}
		return result;
	}
}

int main(){
	
	int tipo,UnidadeEntrada,UnidadeSaida;
	float valor;
	scanf("%d %d %d %f",&tipo,&UnidadeEntrada,&UnidadeSaida,&valor);
	if(tipo==1){
		printf("%.2f\n",ConversaoTemp(UnidadeEntrada,UnidadeSaida,valor));
	}
	else{
		printf("%ld\n",ConversaoBin(UnidadeEntrada,UnidadeSaida,(int)valor));
	}

	return 0;
}
