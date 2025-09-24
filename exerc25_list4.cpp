//Faça um programa que leia dois números n e m e:
  //Crie e leia um vetor de inteiros de n posições;
  //Crie e leia um vetor de inteiros de m posições;
  //Crie e construa um vetor de inteiros que seja a união entre os dois vetores anteriores, ou
//seja, que contém os elementos dos dois vetores (inclusive repetidos). Na sua função main(), imprima os três vetores criados.

#include <stdio.h>

int main(){
	
	
	int n, m;
	int soma;
	
	printf("Digite o tamnho do vetor N: ");
	scanf("%d", &n);
	
	int vet1[n];
	
	printf("Digite o tamnho do vetor M: ");
	scanf("%d", &m);
	
	int vet2[m];
	
	
	printf("\nPreencha os vetor N\n");
	for(int i=0;i<n;i++){
		
		printf("digite um numero (vetor N) (posicao: %d): ", i+1);
		scanf("%d", &vet1[i]);
	}
	
	printf("\nPreencha os vetor M\n");
	for(int j=0;j<m;j++){
		
		printf("digite um numero (vetor M) (posicao: %d): ", j+1);
		scanf("%d", &vet2[j]);	
	}
	
	soma = n + m;
	
	int result[soma]; 
	
	for(int k=0;k<n;k++){
		
		result[k] = vet1[k];
	}
	
	for(int l=0;l<m;l++){
		
		result[l + n] = vet2[l];
	}
	
	printf("\nVetor N: ");
    for (int i = 0; i < n; i++) printf("%d ", vet1[i]);

    printf("\nVetor M: ");
    for (int j = 0; j < m; j++) printf("%d ", vet2[j]);

    printf("\nuniao: ");
    for (int k = 0; k < soma; k++) printf("%d ", result[k]);
    printf("\n");

    return 0;
	
}
