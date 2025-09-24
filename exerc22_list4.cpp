/*Faça um programa que leia um número n e:
* Crie e leia um vetor de inteiro de n posições;
* Conte os múltiplos de um número inteiro x num vetor e mostre-os na tela.
Na sua função main(), mostre quantos múltiplos foram encontrados.*/

#include<stdio.h>

int main(){
	 
	int n;
	int x;
	int cont = 0;
	
	printf("Digite o tamnho do vetor: ");
	scanf("%d", &n);
	
	int vet[n];
	
    printf("Preencha o vetor: ");
	for(int i=0;i<n;i++){
		
		printf("digite o numero da posicao %d: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	printf("Digite o valor de X: ");
	scanf("%d", &x);
	
	
	printf("\nMultiplos de %d no vetor: ", x);
	for(int j=0;j<n;j++){
		
		if(vet[j] % x == 0){
		
		printf("%d ", vet[j]);
		cont ++;
	   }
	
	}
	
	printf("\nForam encontrados %d multiplos de %d.\n", cont, x);
	
	return 0;	
}
