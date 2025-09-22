/*Ler dois conjuntos de números reais, armazenando-os em vetores e calcular o produto escalar entre eles. Os conjuntos têm no máximo 20 elementos. 
Imprimir os dois conjuntos e o produto escalar, sendo que o produto escalar é dado por: x1 _ y1 + x2 _ y2 + ::: +xn _ yn.*/

#include <stdio.h>

int main(){
	
	float vet1[20], vet2[20];
	float result = 0.0;
	
	for(int i=0;i<5;i++){
		
		printf("\nDigite o %do numero do vetor 1: ", i+1);
		scanf("%f", &vet1[i]);
	
		printf("\nDigite o %do numero do vetor 2: ", i+1);
		scanf("%f", &vet2[i]);
		
		result	+= vet1[i] * vet2[i];
	}
	    printf("\nVetor 1: "); 
	for(int i=0;i<5;i++){
		printf("%.2f ", vet1[i]);
	}
	    printf("\nVetor 2: "); 
	for(int j=0;j<5;j++){
		printf("%.2f ", vet2[j]);
	}
	    
	printf("\nProduto escalar e: %.2f\n", result);
	
	
	return 0;
}


