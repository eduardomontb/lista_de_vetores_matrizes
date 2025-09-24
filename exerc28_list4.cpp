//Faça um programa que receba do usuário um vetor x com 10 posições. Em seguida deverá ser impresso o maior e o menor elemento do vetor.

#include <stdio.h>

int main(){
	
	int vet[10];
	int maior, menor;
	
	printf("preencha o vetor\n");
	for(int i=0;i<10;i++){
					
	printf("elemento (%d): ", i+1);
    scanf("%d", &vet[i]);
    
    if(i == 0){
		
		maior = vet[i];
		menor = vet[i];
	}
	if (vet[i] > maior){
		
		maior = vet[i];
	}
	if (vet[i] < menor){
		
		menor = vet[i];
	}
	
	
	}
	
	printf("\nO maior elemento do vetor e: %d ", maior);
	printf("\nO menor elemento do vetor e: %d ", menor);
	
	return 0;
}
