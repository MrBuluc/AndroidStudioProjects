#include <stdio.h>
int asal_mi(int sayi) {
	int i;
	for(i = 2; i < sayi ; i++) {
		if (sayi % i == 0) {
			return 0;
		}

	}
	return 1;
}

int main() {
	int n;
    char m;
	do {
	
	printf("Bir Sayi Giriniz:");
	scanf("%d", &n);
	if (asal_mi(n) == 0) {
		printf("Bu Sayi Asal Degildir.");

	} else {
		printf("Bu Sayi Asaldir.");
	}
	m = getch();
	}while (m != 'h');
	return 0;

}
