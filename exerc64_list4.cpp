/*Leia uma matriz 20 x 20. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, ao final escrever a
localização (linha e coluna) ou  uma mensagem de “não encontrado”.*/

#include <stdio.h>

void preocupara(int n, int mat1[3][3]){

    int achou = 0;

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			
			if(mat1[i][j] == n){
				
				printf("\nO numero %d foi encontrado na posicao [%d][%d]\n", n, i+1, j+1);
				achou = 1;
			
				
			}
		}
		
    }
	if (!achou){
	
	printf("\nnao encontrado...");
    }
}




int main(){
	
	int mat1[3][3];
	int n;
	
	printf("++ Preencha a matriz A ++\n");
	for(int linha=0;linha<3;linha++){
		for(int coluna=0;coluna<3;coluna++){
			printf("Elemento [%d][%d]: ", linha+1, coluna+1);
			scanf("%d", &mat1[linha][coluna]);
		}
	}

	printf("\nMatriz digitada:\n");
	for(int linha=0;linha<3;linha++){
		for(int coluna=0;coluna<3;coluna++){
			printf("%d ", mat1[linha][coluna]);
		}
		printf("\n");
	}
	
	printf("\nDigite o numero voce quer saber se esta na matriz: ");
	scanf("%d", &n);
	
	
	preocupara(n, mat1);
}
