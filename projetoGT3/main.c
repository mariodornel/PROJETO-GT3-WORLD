#include <stdio.h>
#include <stdlib.h>
#include "mario.h"
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opcircuito;
	char pneu;
	
	introducao();
	escolher_carro();
	escolha_pista();
	printf("################################################\n");
	printf("Digite o numero do circuito escolhido:\n");
	printf("################################################\n");
	scanf("%i",&opcircuito);
	fflush(stdin);
	
	escolha_composto();
	printf("################################################\n");
	printf("Digite a letra do composto de pneu escolhido\n");
	printf("################################################\n");
	scanf("%c",&pneu);
	fflush(stdin);
	combustivel_colocar();
	relatorio();
	printf("\n################################################\n");
	logica(opcircuito,pneu);
	printf("\n################################################\n");
	return 0;
}
