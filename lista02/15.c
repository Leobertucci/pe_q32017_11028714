#include<stdio.h>
#include<math.h>

//torre de hanoi

int Hanoi(int n, char origem, char passagem, char destino){
	if(n==1){
		printf("%c-%c, ", origem, destino);
	}
	else{
		Hanoi(n-1, origem, destino, passagem);
		printf("%c-%c, ",origem, destino);
		Hanoi(n-1, passagem, origem, destino);
	}
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	Hanoi(n,'A','B','C');
	
	return 0;
}
