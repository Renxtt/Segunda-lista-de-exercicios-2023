#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>



main(void){
	
	int resurad, nub;
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));	 
	resurad = rand() % 10 + 1;
	printf("Tente acertar qual o seu numero randomico de 1 a 10!!(%d)", resurad);
	printf("\nqual o seu numero randomico:");
	scanf("%d", &nub);
	if(resurad==nub){
		printf("vc acertou mmiserav");
		printf("\nSeu Numero:%d\n", nub);
		printf("\nSeu Numero:%d\n", resurad);
		//TODO
	}
	else{
		printf("tristeza");		
		printf("\nSeu Numero:%d\n", nub);
		printf("\nSeu Numero:%d", resurad);
	}
	
	return 0;
	
}
