//Fa�a um programa que possua um array de nome A que armazene 6 n�meros inteiros. O programa deve executar os seguintes passos:
//(a) Atribua os seguintes valores a este array: 1, 0, 5, -2, -5, 7.
//(b) Armazene em uma vari�vel inteira (simples) a soma entre os valores das posi��es A[0], A[1] e A[5] do array e mostre na tela esta soma.
//(c) Modifique o array na posi��o 4, atribuindo a esta posi��o o valor 100.
//(d) Mostre na tela cada valor do array A, um em cada linha.

#include<stdio.h>

int main (){
	
	int A[6] = {1,0,5,-2,-5,7};
	
	int soma = A[0] + A[1] + A[5];
	printf("Soma de A[0], A[1] e A[5] e: %d ", soma);
	
	A[4] = 100;
	
	printf("\nArray A:\n");
	for(int i=0;i<6;i++){
		
		printf("%d\n", A[i]);
	}
	
	return 0;
} 
