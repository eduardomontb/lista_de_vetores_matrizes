/*Leia uma matriz 8 x 8 e a transforme numa matriz triangular inferior , atribuindo zero a todos os elementos acima da diagonal principal, escrevendo-a ao final.*/

#include<stdio.h>

int atrib(int mat1[4][4], int n){
	
	
	for(int i=0; i<n; i++){
	  for(int j=i+1; j<n; j++){
	  
		mat1[i][j] = 0;
		}
	}
}

int main(){
	
	int mat1[4][4];
	int n = 4;
	
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
	
	atrib(mat1, n);
	
	printf("\nMatriz :\n");
    
    for(int i=0;i<4;i++){
    	for(int j=0;j<4;j++){
    		
    		printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
