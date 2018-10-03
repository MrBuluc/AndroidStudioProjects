#include<stdio.h>
int main() {
	int a,b,c,d,e;
	
	float aritmetik;
	
	printf("5 Tane Sayi Giriniz:");
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	aritmetik = (a+b+c+d+e)/5.0;
	printf("Girdiginiz Sayilarin Aritmetit Ortalamasi %.2f", aritmetik);
	
	
	
	
	return 0;
}

