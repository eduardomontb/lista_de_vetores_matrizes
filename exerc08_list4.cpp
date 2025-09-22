//Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais e os escreva.

#include<stdio.h>

int main(){
	
	int vet[10], cont = 0;
	
	printf("Preencha o vetor.\n");
	
	for(int i=0;i<10;i++){
		
		printf("Digite o numro de posicao (%d): ", i+1);
		scanf("%d", &vet[i]);
		
	}
	
	
	printf("Valores que se repetem: ");
	for(int j=0;j<10;j++){	
		for(int k=j+1;k<10;k++){
			if(vet[j] == vet[k]){
				printf("%d ", vet[j]);
				cont++;
				break;
				
			}		
		}
		
    }
    
    if(cont == 0){
			
			printf("nenhum!");
		}
    
    return 0;
}
