//21. Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor.
//Os conjuntos têm no máximo 20 elementos. Imprimir todos os conjuntos.

#include<stdio.h>

int main(){
	
	float vet1[20];
	float result[20];
	int n;
	
	printf("qunatos numeros o vetor vai possuir (ate 20): ");
	scanf("%d", &n);
	
	if(n<1 || n>20){
		printf("Numero invalido!!");
		return 1;
	}
	
	printf("\nPreencha os vetor A \n");
	for(int i=0;i<n;i++){
		
		printf("digite um numero (vetor A) (posicao: %d): ", i+1);
		scanf("%f", &vet1[i]);
		
		result[i] = vet1[i] * vet1[i];
		
	}
	
	printf("\nVetor original: ");
	for(int k=0;k<n;k++){
		
		printf("%.2f ", vet1[k]);
	}
	
	printf("\nQuadrados: ");
	for (int j=0;j<n;j++){
		
		 printf("%.2f ", result[j]);
	}
	
	return 0;
}
