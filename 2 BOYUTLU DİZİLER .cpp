#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	int fabrika[2][5];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d. fabrikanın %d. elemanının maaşı:", i + 1, j + 1);
			scanf_s("%d", &fabrika[i][j]);
			if (fabrika[i][j] > 1000)
			{
				fabrika[i][j] += fabrika[i][j] * 0.10;
			}
		}
	}
	printf("\n\n***************************");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d. fabrikanın %d. elemanının maaşı : \n", i + 1, j + 1, fabrika[i][j]);
		}
	}

	system("pause");
    return 0;
}

