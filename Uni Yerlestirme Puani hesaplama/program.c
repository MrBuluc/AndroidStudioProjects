#include<stdio.h>
#include<math.h>
#include<conio.h>
int main() {
     
	 float ygs,lys,l1,l2,l3,l4;
	 float y1,y2,t1,t2,y3,y;
	  
     printf("YGS Puaninizi Giriniz:");
	 scanf("%f", &ygs);   
     printf("LYS Puaninzi Giriniz:");	
     scanf("%f", &lys);    
     printf("Lise 1 Yil Sonu Notunuzu Giriniz:");
     scanf("%f", &l1);
     printf("Lise 2 Yil Sonu Notunuzu Giriniz:");
     scanf("%f", &l2);
     printf("Lise 3 Yil Sonu Notunuzu Giriniz:");
     scanf("%f", &l3);
     printf("Lise 4 Yil Sonu Notunuzu Giriniz:");
     scanf("%f", &l4);
     
     y1 = (ygs*40)/100;
     y2 = (lys*60)/100;
     t1 = l1+l2+l3+l4;
     t2 = t1/4;
     y3 = (t2*60)/100;
	 y = y1+y2+y3;
	 
	 printf("Universite Yerlestirme Puaniniz %.2f dir\n", y);
	 printf("Programimi Kullandiginiz Icin Tesekkur Ederim\n ");
	 printf("Programi Hazirliyan Hakkican Buluc");
	 
	
	
	getch();
	return 0;
	  
}
