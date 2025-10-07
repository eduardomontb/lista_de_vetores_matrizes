/*Leia duas matrizes 10 x 10 e faça uma substituição entre a diagonal inferior da primeira coma diagonal superior da segunda*/

#include<stdio.h>

void subst(int mat1[4][4], int mat2[4][4]){
	
	int aux;
	
	for(int i=1;i<4;i++){
		for(int j=0;j<i;j++){
			
			aux=mat1[i][j];  
			mat1[i][j]=mat2[j][i]; 
			mat2[j][i]= aux;  
		}
	}
}


int main(){
	
	int mat1[4][4];
	int mat2[4][4];

	printf("++ Preencha a matriz A ++\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Elemento [%d][%d]: ", i+1, j+1);
			scanf("%d", &mat1[i][j]);
		}
	}
	
	printf("\n\n++ Preencha a matriz B ++\n");
	for(int k=0;k<4;k++){
		for(int l=0;l<4;l++){
			printf("Elemento [%d][%d]: ", k+1, l+1);
			scanf("%d", &mat2[k][l]);
		}
	}

	printf("\nMatriz A:\n");
	for(int m=0;m<4;m++){
		for(int n=0;n<4;n++){
			printf("%d ", mat1[m][n]);
		}
		printf("\n");
	}
	


	printf("\nMatriz B:\n");
	for(int o=0;o<4;o++){
		for(int p=0;p<4;p++){
			printf("%d ", mat2[o][p]);
		}
		printf("\n");
	}
	
	subst(mat1, mat2);
	
	printf("\nNova matriz A:\n");
	for(int m=0;m<4;m++){
		for(int n=0;n<4;n++){
			printf("%d ", mat1[m][n]);
		}
		printf("\n");	
	}
	
	printf("\nNova matriz B:\n");
	for(int o=0;o<4;o++){
		for(int p=0;p<4;p++){
			printf("%d ", mat2[o][p]);
		}
		printf("\n");
	}
	
	return 0;
}
