/*Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.*/

#include<stdio.h>

void mat_10(int mat1[5][5]){
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			
			if(i == j){
				
				mat1[i][j] = 1;
			}else{
				
				mat1[i][j]=0;
			}
			printf("%d ", mat1[i][j]);
		  }
		  printf("\n");
		}
 }



int main(){
	
	int mat1[5][5];
	
	printf("Matriz identidade 5x5:\n");
	mat_10 (mat1);
	
	return 0;
}
