// ConsoleApplication25.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	const int sayi = 5;
	char karakter = 'a';
	char *kelime = "Hello World";
	int sayi2 = 3;
	float ondalikliSayi = 0.4;
	double reelSayi = 12;

	printf("Sonuc %d", sayi);
	printf("Sonuc %c", karakter);
	printf("Sonuc %s", kelime);
	printf("Sonuc %d", sayi2);
	printf("Sonuc %f", ondalikliSayi);
	printf("Sonuc %lf", reelSayi);





	system("pause");
    return 0;
}

