#include<stdio.h>
#include<math.h>
#include<conio.h>
int main() {
	int a,b,c;
	float x1,x2;
	float delta;
	
	printf("Denklemin a'sini Giriniz:");
	scanf("%d", &a);
    printf("Denklemin b'sini Giriniz:");
	scanf("%d", &b);
	printf("Denklemin c'sini Giriniz:");
	scanf("%d", &c);	
    delta = b*b - 4*a*c;
    x1 = (-b + (sqrt(delta)))/2*a;
	x2 = (-b - (sqrt(delta)))/2*a;
	printf("Denklemin 1.Koku %f, Ikinci Koku %f dir\n", x1,x2);
	printf("Programimi Kullandiginiz Icin Tesekkur Ederim\n ");
	printf("Programi Hazirliyan Hakkican Buluc");
	
getch();
	return 0;
	
	

}
