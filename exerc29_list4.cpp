/*Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo, nas
posições pares os valores do primeiro e nas posições impares os valores do segundo.*/

#include <stdio.h>

int main(){
	
	int vet1[5], vet2[5];
	int vet3[5];
	
	printf("++ PREENCHA O VETOR A ++\n");
	
	for(int i=0; i<5; i++){
		
		printf("Posicao %d do vetor A: ", i+1);
		scanf("%d", &vet1[i]);
		
	}
	
	printf("\n++ PREENCHA O VETOR B ++\n");
	
	for(int j=0; j<5; j++){
		
		printf("Posicao %d do vetor B: ", j+1);
		scanf("%d", &vet2[j]);
		
	}
	
	
	for(int i=0; i<5; i++){
		
		if(i % 2 == 0){
			vet3[i] = vet2[i];
		}
		
		
	}
	
	
	for(int i=0; i<5; i++){
		
		if(i % 2 != 0){
			vet3[i] = vet1[i];
		}
		
	
	}
	
	
	printf("\nVetor resultante :");
	for(int i=0; i<5; i++){
		
		printf("\n(Posicao %d) %d", i+1, vet3[i]);
	}
	
	return 0;
}
