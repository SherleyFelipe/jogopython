#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Adivinhacao */

int main(int argc, char *argv[]) {
	
	printf ("\n************Bem-vindo ao jogo de Adivinhacao******************");
	 int numerosecreto;
	 numerosecreto = 42;
	 
	 int  chute;
	 int acertou = chute == numerosecreto;
	 
	  
	  printf ("\nQual e o seu chute?\n");
	 scanf ("%d", &chute);
	 printf ("Voce chutou o numero %d", chute);
	 printf ("\nAcertou: %d\n", acertou);
	 
	 if (chute == numerosecreto) {
	 	 printf ("\n               Parabens! Voce acertou");
	 	 printf ("\nJogue de novo, voce e um bom jogador!\n");
	 int acertou = chute == numerosecreto;
     if(acertou) {
         printf("Parabens! Voce acertou!\n");
        }	 
	 }
	 else {
	 	if (chute > numerosecreto){
	 		printf ("\nSeu chute foi maio que o numero secreto!\n");
		 }
	 	if (chute < numerosecreto){
	 		printf ("\nSeu chute foi menor que o numero secreto!\n");
		 }
	 	
	 	  printf ("\n             Voce errou!");
	 	  printf ("\nMas nao desanime, tente de novo!\n");
	 }
	 

	 getch();
	
	return 0;
	
}
