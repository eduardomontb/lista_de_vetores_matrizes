/*Fa�a um programa que leia um n�mero n e:
* Crie e leia um vetor de inteiro de n posi��es;
* Conte os m�ltiplos de um n�mero inteiro x num vetor e mostre-os na tela.
Na sua fun��o main(), mostre quantos m�ltiplos foram encontrados.*/

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
