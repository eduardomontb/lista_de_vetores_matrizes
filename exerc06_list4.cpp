//6. Considere um vetor A com 11 elementos onde A1 < A2 < _ _ _ < A6 > A7 > A8 >_ _ _ > A11, ou seja, está ordenado em ordem crescente até o sexto elemento,
//e a partir desse elemento está ordenado em ordem decrescente. 

#include <stdio.h>

int main (){
	
	int vet[11];
	int anterior;
	
	for(int i=0; i<6; i++){
		
		printf("\nDigite o valor de um numero inteiro: ");
		scanf("%d", &vet[i]);
		
		if(i > 0){
		
			while(vet[i] < anterior){
			
			printf("\n ===numero invalido===");
			printf("\ndigite um numero maior que o anterior (%d): ", anterior);
			scanf("%d", &vet[i]);
				
			
	      }
	    }
	      anterior = vet[i];
				
		}
		
		for(int j=6; j<11; j++){
			printf("\ndigite um numero menor que o anterior (%d): ", anterior);
            scanf("%d", &vet[j]);
		
		    while(vet[j] > anterior){
		    	
		    printf("\n ===numero invalido===");
			printf("\ndigite um numero menor que o anterior (%d): ", anterior);
			scanf("%d", &vet[j]);	
			}
			
	   	anterior = vet[j];	
		}
	
	
	printf("\n\n\nVetor: ");
	for (int k=0; k<11; k++){
		
		printf("%d ", vet[k]);
	}
	
	return 0;
}
