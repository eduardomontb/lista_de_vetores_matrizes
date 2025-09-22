//3. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.

#include <stdio.h>

int main(){
	
	int vet[10];
	int vetpares[10];
	int contpares = 0;
	
	
	for (int i=0; i<10; i++){
		
		printf("Digite um numero interio (posicao %d):", i);
		scanf("%d", &vet[i]);
		
		if(vet[i] % 2 == 0){
			vetpares[contpares] = vet[i];
			contpares++;
			
		}
    }
	
	printf("\n\nQuantidade de numeros pares no vetor: %d", contpares);
	
	printf("\nNumeros pares do vetor:");
	
	for (int num=0; num<contpares; num++){
	
	   printf(" %d ", vetpares[num]);
	}
	
	
	return 0;
}
