//Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando elementos repetidos.

#include<stdio.h>

int main(){
	
	int vet[20];
	int unicos[20];
	int usados = 0;
	int repetido;	
	
	printf("++Preencha o vetor ++\n");
    for(int i=0; i<20; i++){
   	
   	printf("digite um numero (%d): ", i+1);
   	scanf("%d", &vet[i]);
   
    }
    
    for(int j=0;j<20;j++){
    	
    	repetido = 0;
    	for(int k=0;k<usados;k++){
    		
    		if(vet[j] == unicos[k]){
    			repetido = 1;
    			break;
			}
		}
		if(repetido == 0){
			unicos[usados] = vet[j];
			usados++;
		}
	}
	printf("\nVetor sem numeros repetidos: ");
	for(int l=0;l<usados;l++){
		printf("%d ", unicos[l]);
	}
	printf("\n");
	
	return 0;
}
