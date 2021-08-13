#include <stdio.h>
#include <stdlib.h>
#define NUMERO_DE_TENTATIVAS 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf ("\n************Bem-vindo ao jogo de Adivinhacao******************");
	 int numerosecreto;
	 numerosecreto = 42;
	 int i;
	 int chute;
for(i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {
      printf("\nQual e o seu chute? ");
      scanf("%d", &chute);
      if ( chute < 0) {
      	printf ("Voce nao pode chutar numeros negativos!\n");
      	i--;
      	continue;
	  }
      
      printf("Seu chute foi %d\n",i, chute);
   int acertou = chute == numerosecreto;
     if(acertou) {
     printf("Parabens! Voce acertou!\n");
     
     break;
}       else {
        int maior = chute > numerosecreto;
    if(maior) {
     printf("Seu chute foi maior do que o numerosecreto!\n");

}      else {
      printf("Seu chute foi menor do que o numerosecreto!\n");

}
}
}
printf("Fim de jogo!\n");

	
	return 0;
}
