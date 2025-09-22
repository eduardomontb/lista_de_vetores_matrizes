//4. Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.

#include <stdio.h>

int main(){
	
	int vet[10];
	
	for (int i=0; i<10; i++){
		
		printf("Digite um numero interio (posicao %d):", i);
		scanf("%d", &vet[i]);
		
		if(vet[i] < 0){
			
			vet[i] = 0;
		}
	}
	
	printf("\n\n\nVetor: ");
	for (int num=0; num<10; num++){
		
		printf("%d ", vet[num]);
	}
	
	return 0;
}
