//1. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento e a posição que ele se encontra.

#include <stdio.h>

int main (){
	

	int nmaior;
	int numeros[10];
	int posicao;
		
	for(int i=0; i<10; i++){
		
		printf("\nDigite o valor de um numero inteiro: ");
		scanf("%d", &numeros[i]);
		
		if(i==0){
			
			nmaior = numeros[i];
			posicao = i;
		}
		
		else if(nmaior < numeros[i] ){
			
			nmaior = numeros[i];
			posicao = i;
		}
		
	}
	
	printf("\n\n\nVetor: ");
	for (int num=0; num<10; num++){
		
		printf("%d ", numeros[num]);
	}
	
	printf("\n\nO maior numero desse vetor e: %d", nmaior);
	
	printf("\n\nSua posicao no vetor e (0 a 9): %d", posicao);
	
	return 0;
}
