#include <stdlib.h>
#include <math.h>
#include <stdio.h>

//Exercício 6: Ler um número do usuário e calcular a raiz quadrada desse número.

main(void){
	int raiz, nub, resu;
	
	
	printf("qual o numero dessa raiz:");
	scanf("%d", &nub);
	resu = sqrt(nub);
	printf("%d", resu);
	
	
}
