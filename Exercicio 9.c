#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Exercício 9: Monte um programa que exiba acentuação em C utilizando a lib <locale.h>, dica: utilize o setlocale.

main(void){
	setlocale(LC_ALL, "portuguese");
	printf("arajá");
	return 0;
}

