/*Leia uma matriz 4 x 4 e troque os valores da 1a.linha pelos da 4a.coluna, vice-e-versa. Escrever ao final a matriz obtida*/

#include<stdio.h>

void troca(int mat1[4][4]){
	
	int aux;
	
	for(int i=0;i<4;i++){
		
			
			aux=mat1[0][i]; // guarda o valor da 1ª linha
			mat1[0][i]=mat1[i][3]; // substitui pela 4ª coluna
			mat1[i][3]=aux; // coloca o valor antigo da 1ª linha na 4ª coluna
	}
}


int main(){
	
	int mat1[4][4];
	int result[4][4];
	
	printf("++ Preencha a matriz A ++\n");
	for(int linha=0;linha<4;linha++){
		for(int coluna=0;coluna<4;coluna++){
			printf("Elemento [%d][%d]: ", linha+1, coluna+1);
			scanf("%d", &mat1[linha][coluna]);
		}
	}

	printf("\nMatriz Original:\n");
	for(int linha=0;linha<4;linha++){
		for(int coluna=0;coluna<4;coluna++){
			printf("%d ", mat1[linha][coluna]);
		}
		printf("\n");
	}
	
    troca(mat1);
    
    printf("\nMatriz apos a troca da 1a linha pela 4a coluna:\n");
    
    for(int i=0;i<4;i++){
    	for(int j=0;j<4;j++){
    		
    		printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
