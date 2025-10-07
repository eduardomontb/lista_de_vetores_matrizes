/*Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores elementos entre as primeiras*/

#include<stdio.h>

void maior_mat (int mat1[4][4], int mat2[4][4], int maior[4][4]){
	
	for (int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			
	       if(mat1[i][j] >= mat2[i][j]){
	       	
	        maior[i][j] = mat1[i][j];
		   }
		   
		   else{
		   	
		   	maior[i][j] = mat2[i][j];
		   }
		   printf("%d ", maior[i][j]);
		}
		printf("\n");
	}
}

      


int main(){
	
	
	int mat1[4][4];
	int mat2[4][4];
	int maior[4][4];
	
	printf("++ Preencha a matriz A ++\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Elemento [%d][%d]: ", i+1, j+1);
			scanf("%d", &mat1[i][j]);
		}
	}
	
	printf("++ Preencha a matriz B ++\n");
	for(int k=0;k<4;k++){
		for(int l=0;l<4;l++){
			printf("Elemento [%d][%d]: ", k+1, l+1);
			scanf("%d", &mat2[k][l]);
		}
	}

	printf("\nMatriz digitada A:\n");
	for(int m=0;m<4;m++){
		for(int n=0;n<4;n++){
			printf("%d ", mat1[m][n]);
		}
		printf("\n");
	}
	


	printf("\nMatriz digitada B:\n");
	for(int o=0;o<4;o++){
		for(int p=0;p<4;p++){
			printf("%d ", mat2[o][p]);
		}
		printf("\n");
	}
	
	printf("\n\n++Vetor com os maiores elementos++\n");
	maior_mat(mat1, mat2, maior);
	
	return 0;
}
