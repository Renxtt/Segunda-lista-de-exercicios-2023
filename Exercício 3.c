#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


main(void){

	setlocale(LC_ALL, "portuguese");

	int i, b;
	
	
	// Inicializa o gerador de n�meros aleat�rios com a hora atual
	
	
	srand(time(NULL));
	i = rand() % 990 + 10;
	b = rand() % 990 + 10;
	
	
	
	if(i<b){
		printf("maior N�mero aleat�rio: %d(%d)\n", b, i);
		//TODO
	}
	if(b<i){
		
		printf("maior N�mero aleat�rio: %d(%d)\n", i, b);
				
		//TODO
	}
	
	
	/*printf("N�mero aleat�rio: %d\n", rand() % 100);
	printf("N�mero aleat�rio: %d\n", rand() % 100);
	printf("N�mero aleat�rio: %d\n", rand() % 100);
	printf("N�mero aleat�rio: %d\n", rand() % 100);
	return 0;
	*/
	
	


}
