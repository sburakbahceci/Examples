// ConsoleApplication113.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <stdlib.h>
#include <locale.h>
void Deniz(void) {
	char hs,sh;
	printf("HASTALIK VE SINAV HAFTASI DURUMUNU GİRİNİZ:");
	scanf_s("%d", &hs);
	scanf_s("%d", &sh);
	if(hs=1) { printf("DINLEN!!"); }
    if(sh=1) { printf(" DERS CALIS!!"); }
	

}
int main()
{
	
	setlocale(LC_ALL, "Turkish");
	int a;
	printf("Hangi Günü Ögrenmek İstediginizi Seciniz: P(1) S(2) C(3) P(4) C(5) CT(6) PZ(7) ");
	scanf_s("%d", &a);
	switch (a){
	
	case 1:
		printf("Pazartesi = 'Okuldan Sonra ders(17:00 - 21:00)'");
		break;
	case 2:
		printf("Salı = 'Okuldan Sonra Spor (17:00 - 18:30) Spordan Sonra Ders (19:30 - 21:30)");
		break;
	case3:
		printf("Carsamba = 'Okuldan Önce C Calısılacak(10:00 -12:00) Sonra Spor(17:00 - 18:00) Ve CS:GO'");
		break;
	case 4:
		printf("Persembe = full ders oldugu için ders calısma yok ");
		break;
	case 5:
		printf("Cuma = Öğleden önce ders aksam spor");
		break;
	case 6:
		printf("Cumartesi = eksikleri gider");
		break;
	case 7
		:
		printf("Pazar = Yatıs");
		break;
	default:
			printf("Eksik Geçen Günü Hafta sonu düzelt");
		break;
		
	}
	Deniz();
	system("pause");
    return a;
}

