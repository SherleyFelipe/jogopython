#include <stdio.h>
#include <stdlib.h>
#define NUMERO_DE_TENTATIVAS 3
//

int main(int argc, char *argv[]) {
	
	                   printf ("\n************Bem-vindo ao jogo de Adivinhacao******************");
	 int numerosecreto = 42;
	 int chute;
	 int ganhou = 0;
	 int tentativas =1;
	 while (!ganhou){
	 	
	 	
	                    printf ("Qual e o seu %do . chute?", tentativas);
	 	scanf ("%d", &chute);
	 }
	                    printf ("Seu %do. chute foi %d\n",tentativas, chute);
	   
      if ( chute < 0) {
                        printf ("Voce nao pode chutar numeros negativos!\n");
      	continue;
	  }
      
                       printf("Seu %do. chute foi %d\n",tentativas, chute);
       acertou = chute == numerosecreto;
       int maior = chute > numerosecreto;
       
     if(acertou) {
                        printf("Parabens! Voce acertou!\n");
     ganhou =1;
     
}    else if (maior) {
    
   
                       printf("Seu chute foi maior do que o numerosecreto!\n");

     else {
                        printf("Seu chute foi menor do que o numerosecreto!\n");

}

}

printf("Fim de jogo!\n");
	return 0;
}
