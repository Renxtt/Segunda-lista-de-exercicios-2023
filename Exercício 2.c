#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

main(void){
	
	int nub, nub2, plus, ves;
	setlocale(LC_ALL, "portuguese");
	printf("\n\n\n ol� Por Favor Inssira o PRIMEIRO numero INTEIRO:");
	scanf("%d", &nub);
		
		
	printf("\n\nPor Favor Inssira o SEGUNDO numero INTEIRO:");
	scanf("%d", &nub2);
		
	plus=nub+nub2;
		
	printf("\no primeiro numero escolhido foi %d, o segundo escolhido foi %d", nub, nub2);
	printf("\na soma dos dois numeros escolhidos teve o resultade de %d", plus);
		
	
}
