#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

main(void){
// estou usando http://linguagemc.com.br/exibindo-data-e-hora-com-time-h/ como base
//Exercício 8: Peça ao usuário o ano de nascimento e mostre a idade que fará este ano.
	
	
	int date, daa;
	printf("qual seu ano de nascimento?");
	scanf("%d", &date);
	struct tm *ano_local;
	
	time_t ano;
	time(&ano);
	
	ano_local = localtime(&ano);
	daa=(ano_local->tm_year+1900)-date;
	printf("ano %d", daa);
	
}
