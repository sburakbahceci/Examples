// ConsoleApplication82.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
	//strcmp karşılaştırma yapar
	//strstr
	char dizi1[10] = "abcd";
	char dizi2[5] = "efgh";


	strcat(dizi1, dizi2);
	strcat(dizi1, dizi2);


	printf("%s\n", dizi1);
	printf("%s\n", dizi2);
	
	


    return 0;
}

