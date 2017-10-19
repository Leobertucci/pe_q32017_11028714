#include<stdio.h>
#include<math.h>

int numDig(int n){ //dígitos de n
	if(n<10) return 1;
	return 1+numDig(n/10);
}

int inverte(int n){ //123 -> 321
	if(n <10) return n;
	return pow(10,numDig(n)-1)*(n%10)+inverte(n/10);
}

int palindromo(int n){
	return n==inverte(n);
}

int main(){
	int n;
	scanf("%d", &n);
	if(palindromo(n)){
		printf("sim\n");
	}
	else{
		printf("nao\n");
	}
	
	return 0;
}
