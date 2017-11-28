#include <stdio.h>
#include <math.h>

typedef struct pontoR3{
	float x;
	float y;
	float z;
}ponto;

float dist(ponto a, ponto b){
	return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2)+pow(a.z-b.z,2));
}

int main(){
	ponto p1,p2;
	scanf("%f, %f, %f", &p1.x, &p1.y, &p1.z);
	scanf("%f, %f, %f", &p2.x, &p2.y, &p2.z);
	
	printf("%.2f", dist(p1,p2));
	return 0;
}
