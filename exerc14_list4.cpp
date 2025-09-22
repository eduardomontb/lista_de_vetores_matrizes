//Leia um vetor com 10 números de ponto flutuante, ordene os elementos deste vetor, e no final escreva os elementos do vetor ordenado.

#include <stdio.h>

int main(){
	
	float vet[10];
    float temp;
	
	printf("++Preencha o vetor ++\n");
    for(int i=0; i<10; i++){
   	
   	printf("digite um numero (%d): ", i+1);
   	scanf("%f", &vet[i]);
   
    }
    
    for(int j=0;j<9;j++){
    	for(int k=0;k<9;k++){
    		if(vet[k] > vet[k+1]){
    			
    			temp=vet[k];
    			vet[k]=vet[k+1];
    			vet[k+1]=temp;
			}
		}
	}
	
	printf("\nVetor ordenado em ordem crescente: ");
	for(int l=0;l<10;l++){
		printf("%.2f ", vet[l]);
	}
	
	return 0;
}
	
