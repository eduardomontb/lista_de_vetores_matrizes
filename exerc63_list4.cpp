/*Leia uma matriz 6 x 6, conte e escreva quantos valores maiores que 10 ela possui*/

#include <stdio.h>

void maiorq10(int mat1[][3]){
	
	int cont = 0;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			
			if(mat1[i][j] > 10){
				
				cont++;
			} 
		}
	}
	
	printf("\n\na matriz 'A' tem %d valores maiores que 10.", cont);
}


int main(){
	
	
	int mat1[3][3];
	
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
	
	maiorq10(mat1);
	
	
	return 0;
}
