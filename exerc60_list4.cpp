/*Leia uma matriz 10 x 10 e escreva a localização (linha e a coluna) do maior valor.*/

#include<stdio.h>


int maior_elemento(int mat1[10][10], int linha, int coluna){
	
	int lin = 0;
	int col = 0;
	int maior = mat1[0][0];
	
	for(int i=0; i<linha; i++){
		for(int j=0; j<coluna; j++){
			
			if(mat1[i][j] > maior){
				
				maior = mat1[i][j];
				lin = i;
				col = j;
			}
		}
	}
	
	printf("\n\nO maior da matriz esta em [%d][%d] = %d ", lin+1, col+1, maior);
}

int main(){
	
	int mat[10][10];
	
	for(int linha=0;linha<10;linha++){
		for(int coluna=0;coluna<10;coluna++){
			printf("Elemento [%d][%d]: ", linha+1, coluna+1);
			scanf("%d", &mat[linha][coluna]);
		}
	}

	printf("\nMatriz digitada:\n");
	for(int linha=0;linha<10;linha++){
		for(int coluna=0;coluna<10;coluna++){
			printf("%d ", mat[linha][coluna]);
		}
		printf("\n");
	}
	
	maior_elemento(mat, 10, 10);
	
	return 0;
}
