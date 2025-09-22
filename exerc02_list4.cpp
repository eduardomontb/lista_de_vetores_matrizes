//2. Escreva um programa que leia n números inteiros no intervalo [0,50] e os armazene em um vetor estaticamente alocado com 100 posições. Preencha um segundo 
//vetor, também alocado estaticamente, apenas com os números ímpares do primeiro vetor. Imprima os dois vetores, 10 elementos por linha.

#include<stdio.h>

int main(){
	
	int n;
	int vet[100];
	int vetimpar[100];
	int contimpar;
	
	printf("Quantos numeros o vetor vai armazenar: ");
	scanf("%d", &n);
	
	
	for(int i=0; i< n; i++){
		
		printf("\nDigite o valor de um numero inteiro (no intervalo entre 0,50): ");
	    scanf("%d", &vet[i]);
		
		while(vet[i] < 0 || vet[i] > 50){
		
		printf("\nEsse numero nao esta entre o intervalo entre 0,50 ");
		printf("\nDigite um novo numero: ");
		scanf("%d", &vet[i]);
		
		}
		
		if(vet[i] % 2 != 0){
			
			vetimpar[contimpar] = vet[i];
			contimpar++;
			
		}	
			 
	}
	
	printf("\n\n\nVetor principal: ");
	for(int num=0; num< n; num++){
		
		printf("%d ", vet[num]);
	}
	
	
	printf("\n\nNumeros impares do vetor: ");
	for (int num2=0; num2 < contimpar; num2++){
		
		printf("%d ", vetimpar[num2]);
	}

 return 0;	
}
