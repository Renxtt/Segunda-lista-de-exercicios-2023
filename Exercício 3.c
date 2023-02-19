#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


main(void){

	setlocale(LC_ALL, "portuguese");

	int i, b;
	
	
	// Inicializa o gerador de números aleatórios com a hora atual
	
	
	srand(time(NULL));
	i = rand() % 990 + 10;
	b = rand() % 990 + 10;
	
	
	
	if(i<b){
		printf("maior Número aleatório: %d(%d)\n", b, i);
		//TODO
	}
	if(b<i){
		
		printf("maior Número aleatório: %d(%d)\n", i, b);
				
		//TODO
	}
	
	
	/*printf("Número aleatório: %d\n", rand() % 100);
	printf("Número aleatório: %d\n", rand() % 100);
	printf("Número aleatório: %d\n", rand() % 100);
	printf("Número aleatório: %d\n", rand() % 100);
	return 0;
	*/
	
	


}
