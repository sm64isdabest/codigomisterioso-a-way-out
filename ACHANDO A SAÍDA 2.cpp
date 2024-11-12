#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor[10], cubo[10], quadrado[10], i, result;
	for(i=0; i<1; i++){
		printf("Digite o número da camisa do melhor jogador de futebol do mundo: ", i+1);
		scanf("%d", &vetor[i]);
	}
	for(i=0; i<1; i++){
		cubo[i]=vetor[i]*vetor[i]*vetor[1];
	}
	for(i=0; i<1; i++){
		printf("\n%d", cubo[i]/256-13);
	}
}
