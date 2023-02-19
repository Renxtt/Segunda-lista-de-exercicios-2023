#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


main(void){
	
	int i,b, c;
	srand(time(NULL));
	
	i=rand() % 991 +10;
	b=rand() % 991 +10;
	printf("esse é o numero randmico %d\n", i);
	printf("esse é o numero randmico %d\n", b);
	c=i*b;
	printf("esse é o numero da soma dos numeros randomicos a cima:%d", c );
	
	
	return 0;
}
