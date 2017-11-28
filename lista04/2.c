#include <stdio.h>
#include <math.h>

typedef struct{
	int min;
	int seg;
	int dec;
}cron;

cron dist(cron a, cron b){
	cron dif;
	int decA = a.dec+a.seg*100+a.min*6000;
	int decB = b.dec+b.seg*100+b.min*6000;	
	int diferenca = decB-decA;
	dif.min = diferenca/6000;
	dif.seg = (diferenca%6000)/100;
	dif.dec = (diferenca%6000)%100;
	return dif;
}

int main(){
	cron c1,c2;
	scanf("%dm %ds %d", &c1.min, &c1.seg, &c1.dec);
	scanf("%dm %ds %d", &c2.min, &c2.seg, &c2.dec);
	cron s=dist(c1,c2);
	printf("%dm %ds %d", s.min, s.seg, s.dec);
	return 0;
}
