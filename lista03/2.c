#include <stdio.h>
#include <stdlib.h>

int len (char * s)
{
	int n = 0;
	while(s[n]!='\0') n++;
	return n;
  
}

char* inverte(char* s1){
	char* s2=malloc(sizeof(char)*255);
	int l1 = len(s1)-1; //problema fgets
	//printf("%d", l1);
	for(int i=0; i<l1;i++){
		s2[l1-1-i]=s1[i];
		//printf("%c\n",s1[i]);

	}
	return s2;
}

int main(){
	char entrada[255];
	fgets(entrada,255,stdin); //capturando com len +1
	printf("%s\n", inverte(entrada));
	
	return 0;
}
