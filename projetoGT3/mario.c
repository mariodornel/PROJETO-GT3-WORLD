#include <stdio.h>
#include <stdlib.h>
#include "mario.h"
#include <locale.h>

void introducao(){
	printf("################################################\n");
	printf("####   Bem vindo ao GT WORLD CHAMPIONSHIP   ####\n");
	printf("################################################\n");
	printf("#### O campeonato mundial de categoria GT3  ####\n");
	printf("####     com corridas de tirar o fol�go     ####\n");
	printf("################################################\n");
	
	printf("\n################################################\n");
	printf("Neste campeonato voc� podera selecionar um dos 4 carros\n");
	printf("dispon�veis e desfrutar de 3 pistas muito emocionantes\n");
	printf("com disputas de tirar o fol�go a cada volta\n");
	printf("################################################\n");
}

void escolher_carro(){
	int carro;
	printf("\n################################################\n");
	printf("Escolha um carro para participar na etapa:\n");
	printf("N�mero 1: Lamborghini Huracan GT3 600hp\n");
	printf("N�mero 2: Mercedes AMG GT3 520hp\n");
	printf("N�mero 3: BMW Z4 GT3 530hp\n");
	printf("N�mero 4: Porsche 911 GT3 500hp\n");
	printf("################################################\n");
	printf("Digite o n�mero do carro escolhido:\n");
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
	printf("Agora vamos calcular quanto de combust�vel ira colocar para a etapa\n");
	printf("Os carros GT3 fazem em m�dia 4 litros por volta\n");
	printf("insira quantas voltas tem a etapa para colocar a quantidade certa de combust�vel\n");
	printf("################################################\n");
	
	scanf("%i",&fuel);
	combustivel = fuel * lap;
	
	system("cls");
	printf("################################################\n");
	printf("voc� colocar�: %i litros de combust�vel no seu carro para completar a etapa com efici�ncia.\n",combustivel);
	printf("################################################\n");
}
	
void escolha_pista(){
	printf("\n################################################\n");
	printf("Agora escolha um circuito no qual correr� a etapa:\n");
	printf("N�mero 1: Circuito de SPA-FRANCORCHAMPS /Belgica/ 7km /10LAPS\n");
	printf("N�mero 2: Circuito de MONZA /Italia/ 6km /15LAPS\n");
	printf("N�mero 3: Circuito de INTERLAGOS /Brasil/ 4km /25LAPS\n");
}

void escolha_composto(){
	printf("\n################################################\n");
	printf("Agora escolha o composto de pneu que usar� na etapa:\n");
	printf("Letra (S): Composto SOFT para obter o melhor desempenho em poucas voltas\n");
	printf("Letra (M): Composto MEDIUM para obter o melhor desempenho em um numero razo�vel de voltas\n");
	printf("Letra (H): Composto HARD para aguentar o maior numero de voltas sem muito desgaste\n");
}
	
void relatorio(){
	printf("\n################################################\n");
	printf("######## Relat�rio da corrida abaixo: ##########\n");
	printf("################################################\n");
} 	
	
int logica(int opcircuito,char pneu){
		if(opcircuito == 1)
	{
		switch (pneu)
		{
			case 'S': printf("Parab�ns usou o composto adequado e conseguiu fazer o carro render ultrapassagems at�\no final da corrida e conseguiu p�dio em 1(primeiro) lugar depois de ultrapassar 3 carros na ultima volta. :) "); break;
			case 'M': printf("Seu carro perdeu algumas posi��es ao longo da prova pois ele estava com pneu mais\nduro do que precisava para a etapa e quando foi pisar fundo na curva Eau Rouge o composto errado fez\ncom que voc� saisse de traseira rodopiando pela pista, voc� conseguiu finalizar a prova em 24(vig�simo quarto)\nparab�ns."); break;
			case 'H': printf("Seu carro demorou muito para esquentar o pneu no inicio da corrida, o composto errado\nfez com que ele perdesse muitas posi��es, na �ltima curva do circuito na volta 7\no seu carro perdeu tra��o pois os pneus ainda estavam frios, assim voc� derrapou e colidiu\ncom outro ve�culo logo ambos abandonaram a prova, voc� n�o terminou a corrida e n�o pontuou,\nboa sorte com a pr�xima vez."); break;
		}
	}
	
	if(opcircuito == 2)
	{
		switch (pneu)
		{
			case 'S': printf("O pneu SOFT foi �til nas primeiras voltas onde voc� ultrapassou alguns carros,\npor�m na 10 volta o desgaste dos pneus come�aram a afetar a pilotagem,\nvoc� estava mais lento nas curvas e saindo muito de traseira, o composto SOFT n�o aguentou bem as 15 voltas de MONZA\ne voce terminou sendo ultrapassado algumas vezes em saidas de curvas,\nparab�ns conseguiu terminar a prova em 10(D�cimo)."); break;
			case 'M': printf("O composto que voc� colocou aguentou muito bem as 15 voltas em MONZA,\nn�o houve muito desgaste e conseguiu manter o rendimento de tempo por voltas,\nno fim voce fez v�rias ultrapassagens em carros mais lerdos e\nconseguiu terminar em 1(primeiro) lugar, parab�ns pela prova."); break;
			case 'H': printf("O seu carro aguentou firme e n�o desgastou os pneus por�m perdia em disputas de curvas\ncontra carros com compostos mais macios, no fim o seu pneu ainda estava frio na 10 volta\ne no final da reta oposta voc� foi tentar ultrapassar um retardat�rio,\npor�m seu carro foi estilingado causando um contra ester�o no volante por abusar demais dos pneus frios,\nvoce voou direto para a areia, n�o destruiu o carro porem teve que abandonar a prova e nao pontuou,\nboa sorte na pr�xima."); break;
		}
	}
	
	 if(opcircuito == 3)
	{
		switch (pneu)
		{
			case 'S': printf("Nas 25 voltas de INTERLAGOS seu carro come�ou bem,\nconseguiu v�rias posi��es logo nas primeiras 10 voltas,\npor�m os seus pneus com o composto SOFT ja estavam bem desgastados \nenquanto os outros oponentes atr�s estavam de pneu HARD bem novos ainda,\nna 15 volta no final da reta principal entrando na curva do S do senna,\nvoc� olhou no retrovisor e viu que estava sendo ultrapassado por um porsche 911,\nvoc� entao se emocionou e com os pneus desgastados acabou errando o tra�ado da curva,\nassim seu carro destracionou e colidiu com o guardirail,\nent�o voc� foi obrigado a abandonar a prova, boa sorte da proxima vez."); break;
			case 'M': printf("Voc� come�ou a corrida bem, se manteve est�vel at� a 20 volta,\npor�m quase no final da prova seus pneus MEDIUM ja estavam um pouco desgastados,\nvoc� ficou em desvantagem com quem estava correndo de pneu HARD pois seu pneu estava ficando muito liso,\nvoc� estava perdendo muitas posi��es em curvas, ent�o conseguiu terminar a prova em 8(oitavo) lugar\ne n�o conseguiu o p�dio, boa sorte da proxima vez."); break;
			case 'H': printf("O seu carro largou bem e se manteu entre os 10 primeiros at� a 20(vig�sima) volta,\nos outros carros come�aram a perder rendimento, mas voce colocou o composto certo,\nseu pneu HARD n�o desgastou tanto, assim voce realizou algumas ultrapassagens na reta oposta e no S do seena,\nseu carro foi chegando cada vez mais perto do primeiro colocado,\nna ultima curva da volta 25 o primeiro colocado ficou logo a sua frente, ele cometeu um erro e freiou muito cedo,\ne travou as rodas dele, voc� com seu pneu HARD freiou tarde e conseguiu a ultrapassagem na ultima volta,\nconcluindo a prova em 1 lugar, parab�ns."); break;
		}
	}
	return 0;
}
