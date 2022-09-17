#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int numerosecreto = 100;
	int chute;
	int dificuldade;
	int tentativas;
	char continuarJogando ='s';
	
	do{
	
	printf("***********************************\n");
	printf("*Bem vindo ao jogo da adivinhacao *\n");
	printf("***********************************\n");
	printf("Escolha a dificuldade do jogo\n(1) Bebe-(20 tentativas)\n(2) Adulto-(15 tentativas)\n(3) Master-(10 tentativas)\n(4) Expert-(5 tentativas)");
	printf("\n");
		scanf("%d", &dificuldade);

	switch(dificuldade){
		case 1:
			tentativas = 20;
			break;
		case 2:
			tentativas = 15;
			break;
		case 3:
			tentativas = 10;
			break;
		default:
			tentativas = 5;
	}
	double pontos = 1000;
		srand(time(0));
			numerosecreto = rand() % 100;

	for(int i=1; i<=tentativas; i++) {
		printf("Qual e o seu chute?\n ");
			scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);
			
		if (chute == numerosecreto){
			printf("vc acertou...");
			break;
		} else if(chute < numerosecreto){
			printf("Seu chute foi menor que o numero secreto.\n\n");
		}else if(chute > numerosecreto){
			printf("Seu chute foi maior que o numero secreto.\n\n");
		}
	}
		printf("Continuar jogando ? (s/n)");
			scanf(" %c", &continuarJogando);
			system("cls");
	}while (continuarJogando == 's');
}
