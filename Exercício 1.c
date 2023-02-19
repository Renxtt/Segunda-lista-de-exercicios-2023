#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Exercício 1: Gerar um número aleatório entre 1 e 100 e imprimir na tela.

main(){
	srand(time(NULL));
	printf("Número aleatório: %d\n", rand() % 100+1);
	printf("Número aleatório: %d\n", rand() % 100+1);
	printf("Número aleatório: %d\n", rand() % 100+1);
	printf("Número aleatório: %d\n", rand() % 100+1);
	printf("Número aleatório: %d\n", rand() % 100+1);
		
	return 0;
}
