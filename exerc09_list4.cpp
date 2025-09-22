//Faça um programa que leia um vetor de cinco posições para números reais e, depois, um
//código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem
//direta; se for 2, mostre o vetor na ordem inversa. Caso, o código for diferente de 1 e 2
//escreva uma mensagem falando que o código é inválido.

#include<stdio.h>

int main(){
	
	int vet[5];
	int op;
	
	printf("Preencha o vetor.\n");
	for(int i=0;i<5;i++){
		
		printf("Digite o numero (posicao %d): ", i+1);
		scanf("%d", &vet[i]);
	}
	
	for(;;){
		printf("\n\t\t= Menu =");
		printf("\n\t= 1 - Vetor na ordem direta =");
		printf("\n\t= 2 - Vetor na ordem inversa =");
		printf("\n\t= 0 - Sair =");
		printf("\n\tOpcao >>>");
		scanf("%d", &op);
		
		
		switch(op){
		
			case 1: printf("\nVetor na ordem direto: ");
			    for(int j=0;j<5;j++){
			    	
			    	printf("%d ", vet[j]);
				}
			
			    printf("\n");	 	
				break;
				
			case 2: printf("Vetor na ordem inversa: ");
			    for(int k=4;k>=0;k--){
				
			        printf("%d ", vet[k]);	
				}
				
				printf("\n");
				break;	
						
		    case 0: printf("\nSaindo...");
		        
		        return 0;
			
			default: printf("\n\tOpcao invalida!!!");
			printf("\n");		
			
		}
		
	}
}

