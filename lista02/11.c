#include<stdio.h>
#include<math.h>

long int ConversaoBinRec(long int valor, int i, int opcao){
	if(opcao == 1){
		if (valor==0) return 0;
		return (long int)(pow(10,i)*(valor%2)+ConversaoBinRec(valor/=2,i+=1,1));
	}
	else{
		if (valor==0) return 0;
		return (long int)(pow(2,i)*(valor%10)+ConversaoBinRec(valor/=10,i+=1,2));
	}
}	

long int ConversaoBin(long int valor, int opcao){
	return ConversaoBinRec(valor, 0, opcao);
}

int main(){
	long int n;
	int opcao;
	scanf("%ld %d",&n,&opcao);
	printf("%ld\n",ConversaoBin(n,opcao));

	return 0;
}
