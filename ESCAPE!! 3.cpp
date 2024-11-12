#include <stdio.h>
#include <locale.h>
#include <time.h>
#define LINHA 2
#define COLUNA 2

int matriz[LINHA][COLUNA], vetor[5];
char palavra[50];
	
int somaVetor(){
	int soma=0;
	for(int i=0; i<5; i++){
		soma+=vetor[i];
	}
	return soma;
}
void preencherMatriz(int valor){
	printf("Preenchendo matriz de 2x2\n");
	for(int i=0; i<LINHA; i++){
		for(int j=0; j<COLUNA; j++){
			matriz[i][j]=valor;
		}
	}
}
void imprimirMatriz(){
	printf("Matriz de 2x2: \n");
	for(int i=0; i<LINHA; i++){
		printf("\n");
		for(int j=0; j<COLUNA; j++){
			printf("%d\t", matriz[i][j]);
		}
	}
}
	
int main(){

	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	
	do{
	printf("\nUtilizando as dicas dadas nos códigos já resolvidos, descubra a palavra criptografada (YHQFHGRU) e  insira a seguir: ");
	scanf(" %[^\n]", &palavra);
	if(strcmp(palavra, "")==0){
		printf("\nPalavra descoberta");
	}
	else{
		printf("\nPalavra-chave errada, tente novamente\n");
	}
	}while(strcmp(palavra, "")!=0);
}
