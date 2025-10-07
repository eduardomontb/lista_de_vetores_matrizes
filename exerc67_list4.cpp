/*Leia uma matriz 5 x 5 e faça uma troca entre as diagonais superior e inferior. Escreva-a ao final.*/

#include<stdio.h>

int troca(int mat1[5][5]){
	
	int aux;
	
	for(int i=1;i<5;i++){
		for(int j=0;j<i;j++){
			
			aux=mat1[i][j];  // guarda elemento superior.
			mat1[i][j]=mat1[j][i]; // coloca o elemento inferior no lugar do superior.
			mat1[j][i]= aux;  // coloca o elemento superior no lugar do inferior.
		}
	}
}


int main(){
	
	int mat1[5][5];
	
	printf("++ Preencha a matriz A ++\n");
	for(int linha=0;linha<5;linha++){
		for(int coluna=0;coluna<5;coluna++){
			printf("Elemento [%d][%d]: ", linha+1, coluna+1);
			scanf("%d", &mat1[linha][coluna]);
		}
	}

	printf("\nMatriz Original:\n");
	for(int linha=0;linha<5;linha++){
		for(int coluna=0;coluna<5;coluna++){
			printf("%d ", mat1[linha][coluna]);
		}
		printf("\n");
	}
	
	troca(mat1);
	
	printf("\nMatriz :\n");
    
    for(int i=0;i<5;i++){
    	for(int j=0;j<5;j++){
    		
    		printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
