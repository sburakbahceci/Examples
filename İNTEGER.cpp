// ConsoleApplication100.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>


int main()
{
	int i, A[10] = { 0,10,20,30,40,50,60,70,80,90 };
	int *p;
		p = A;
	for (i = 0; i < 10; i++) {
		printf("%d %d %d", i, *p, p);
		p++;

	}


	system("pause");
    return 0;
}

