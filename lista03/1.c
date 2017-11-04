#include <stdio.h>

int contaVogais(char entrada[255]){
	int v = 0;
	int i = 0;
	while(entrada[i] != '\0'){
		if(entrada[i]=='a' || entrada[i]=='e' || entrada[i]=='i' ||entrada[i]=='o' 			|| entrada[i]=='u'){
			v++;
		}
		i++;
	}
	return v;
}

int main(){
	char entrada[255];
	fgets(entrada,255,stdin);
	printf("%d\n", contaVogais(entrada));
	
	return 0;
}
