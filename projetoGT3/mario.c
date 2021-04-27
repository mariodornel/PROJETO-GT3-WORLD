#include <stdio.h>
#include <stdlib.h>
#include "mario.h"
#include <locale.h>

void introducao(){
	printf("################################################\n");
	printf("####   Bem vindo ao GT WORLD CHAMPIONSHIP   ####\n");
	printf("################################################\n");
	printf("#### O campeonato mundial de categoria GT3  ####\n");
	printf("####     com corridas de tirar o folêgo     ####\n");
	printf("################################################\n");
	
	printf("\n################################################\n");
	printf("Neste campeonato você podera selecionar um dos 4 carros\n");
	printf("disponíveis e desfrutar de 3 pistas muito emocionantes\n");
	printf("com disputas de tirar o folêgo a cada volta\n");
	printf("################################################\n");
}

void escolher_carro(){
	int carro;
	printf("\n################################################\n");
	printf("Escolha um carro para participar na etapa:\n");
	printf("Número 1: Lamborghini Huracan GT3 600hp\n");
	printf("Número 2: Mercedes AMG GT3 520hp\n");
	printf("Número 3: BMW Z4 GT3 530hp\n");
	printf("Número 4: Porsche 911 GT3 500hp\n");
	printf("################################################\n");
	printf("Digite o número do carro escolhido:\n");
	printf("################################################\n");
	scanf("%i",&carro);
	system("cls");
}

void combustivel_colocar(){
	int fuel;
	int lap;
	int combustivel;
	lap = 4;
	printf("\n################################################\n");
	printf("Agora vamos calcular quanto de combustível ira colocar para a etapa\n");
	printf("Os carros GT3 fazem em média 4 litros por volta\n");
	printf("insira quantas voltas tem a etapa para colocar a quantidade certa de combustível\n");
	printf("################################################\n");
	
	scanf("%i",&fuel);
	combustivel = fuel * lap;
	
	system("cls");
	printf("################################################\n");
	printf("você colocará: %i litros de combustível no seu carro para completar a etapa com eficiência.\n",combustivel);
	printf("################################################\n");
}
	
void escolha_pista(){
	printf("\n################################################\n");
	printf("Agora escolha um circuito no qual correrá a etapa:\n");
	printf("Número 1: Circuito de SPA-FRANCORCHAMPS /Belgica/ 7km /10LAPS\n");
	printf("Número 2: Circuito de MONZA /Italia/ 6km /15LAPS\n");
	printf("Número 3: Circuito de INTERLAGOS /Brasil/ 4km /25LAPS\n");
}

void escolha_composto(){
	printf("\n################################################\n");
	printf("Agora escolha o composto de pneu que usará na etapa:\n");
	printf("Letra (S): Composto SOFT para obter o melhor desempenho em poucas voltas\n");
	printf("Letra (M): Composto MEDIUM para obter o melhor desempenho em um numero razoável de voltas\n");
	printf("Letra (H): Composto HARD para aguentar o maior numero de voltas sem muito desgaste\n");
}
	
void relatorio(){
	printf("\n################################################\n");
	printf("######## Relatório da corrida abaixo: ##########\n");
	printf("################################################\n");
} 	
	
int logica(int opcircuito,char pneu){
		if(opcircuito == 1)
	{
		switch (pneu)
		{
			case 'S': printf("Parabéns usou o composto adequado e conseguiu fazer o carro render ultrapassagems até\no final da corrida e conseguiu pódio em 1(primeiro) lugar depois de ultrapassar 3 carros na ultima volta. :) "); break;
			case 'M': printf("Seu carro perdeu algumas posições ao longo da prova pois ele estava com pneu mais\nduro do que precisava para a etapa e quando foi pisar fundo na curva Eau Rouge o composto errado fez\ncom que você saisse de traseira rodopiando pela pista, você conseguiu finalizar a prova em 24(vigésimo quarto)\nparabéns."); break;
			case 'H': printf("Seu carro demorou muito para esquentar o pneu no inicio da corrida, o composto errado\nfez com que ele perdesse muitas posições, na última curva do circuito na volta 7\no seu carro perdeu tração pois os pneus ainda estavam frios, assim você derrapou e colidiu\ncom outro veículo logo ambos abandonaram a prova, você não terminou a corrida e não pontuou,\nboa sorte com a próxima vez."); break;
		}
	}
	
	if(opcircuito == 2)
	{
		switch (pneu)
		{
			case 'S': printf("O pneu SOFT foi útil nas primeiras voltas onde você ultrapassou alguns carros,\nporém na 10 volta o desgaste dos pneus começaram a afetar a pilotagem,\nvocê estava mais lento nas curvas e saindo muito de traseira, o composto SOFT não aguentou bem as 15 voltas de MONZA\ne voce terminou sendo ultrapassado algumas vezes em saidas de curvas,\nparabéns conseguiu terminar a prova em 10(Décimo)."); break;
			case 'M': printf("O composto que você colocou aguentou muito bem as 15 voltas em MONZA,\nnão houve muito desgaste e conseguiu manter o rendimento de tempo por voltas,\nno fim voce fez várias ultrapassagens em carros mais lerdos e\nconseguiu terminar em 1(primeiro) lugar, parabéns pela prova."); break;
			case 'H': printf("O seu carro aguentou firme e não desgastou os pneus porém perdia em disputas de curvas\ncontra carros com compostos mais macios, no fim o seu pneu ainda estava frio na 10 volta\ne no final da reta oposta você foi tentar ultrapassar um retardatário,\nporém seu carro foi estilingado causando um contra esterço no volante por abusar demais dos pneus frios,\nvoce voou direto para a areia, não destruiu o carro porem teve que abandonar a prova e nao pontuou,\nboa sorte na próxima."); break;
		}
	}
	
	 if(opcircuito == 3)
	{
		switch (pneu)
		{
			case 'S': printf("Nas 25 voltas de INTERLAGOS seu carro começou bem,\nconseguiu várias posições logo nas primeiras 10 voltas,\nporém os seus pneus com o composto SOFT ja estavam bem desgastados \nenquanto os outros oponentes atrás estavam de pneu HARD bem novos ainda,\nna 15 volta no final da reta principal entrando na curva do S do senna,\nvocê olhou no retrovisor e viu que estava sendo ultrapassado por um porsche 911,\nvocê entao se emocionou e com os pneus desgastados acabou errando o traçado da curva,\nassim seu carro destracionou e colidiu com o guardirail,\nentão você foi obrigado a abandonar a prova, boa sorte da proxima vez."); break;
			case 'M': printf("Você começou a corrida bem, se manteve estável até a 20 volta,\nporém quase no final da prova seus pneus MEDIUM ja estavam um pouco desgastados,\nvocê ficou em desvantagem com quem estava correndo de pneu HARD pois seu pneu estava ficando muito liso,\nvocê estava perdendo muitas posições em curvas, então conseguiu terminar a prova em 8(oitavo) lugar\ne não conseguiu o pódio, boa sorte da proxima vez."); break;
			case 'H': printf("O seu carro largou bem e se manteu entre os 10 primeiros até a 20(vigésima) volta,\nos outros carros começaram a perder rendimento, mas voce colocou o composto certo,\nseu pneu HARD não desgastou tanto, assim voce realizou algumas ultrapassagens na reta oposta e no S do seena,\nseu carro foi chegando cada vez mais perto do primeiro colocado,\nna ultima curva da volta 25 o primeiro colocado ficou logo a sua frente, ele cometeu um erro e freiou muito cedo,\ne travou as rodas dele, você com seu pneu HARD freiou tarde e conseguiu a ultrapassagem na ultima volta,\nconcluindo a prova em 1 lugar, parabéns."); break;
		}
	}
	return 0;
}
