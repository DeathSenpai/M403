#include <stdio.h>
#include <stdlib.h>
#include "Quelle.h"


void main () {
	int userinput=0;
	int ostertag = 0;
	printf(" Bitte geben sie das Jahr ein\n");
	scanf_s("%d", &userinput);
	

	int m = (8 * (userinput / 100) + 13) / 25 - 2;
	int s = userinput / 100 - userinput / 400 - 2;
	int v = (15 + s - m) % 30;
	int n = (6 + s) % 7;
	
	int a = userinput % 19;
	int c = userinput % 7;
	int b = userinput % 4;
	int d = (19 * a + v) % 30;
	int e = (2 * b + 4 * c + 6 * d + n) % 7;
	
	ostertag = (22 + d + e);
	
	
	
	
	if((d==28)&&(a>=11))
	{
		d = 27;
	}
	
	if (d == 29)
	{
		d = 28;
	}

	if (ostertag <= 31)
	{
		printf("Ostern ist am %d März\n\n", ostertag);
	}
	
	if (ostertag > 31)
	{
		ostertag = ostertag % 31;

		printf("Ostern ist am %d April\n\n", ostertag);
	}
	system("pause");
}