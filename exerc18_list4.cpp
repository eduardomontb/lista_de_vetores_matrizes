//18. Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o número do aluno e o segundo representando a sua altura em metros. 
//Encontre o aluno mais baixo e o mais alto. Mostre o número do aluno mais baixo e do mais alto, juntamente com suas alturas.

#include <stdio.h>

int main (){
	
	int aluno[10], maior_aluno;
	float altura[10], maior_altura;
	
	
	for(int i=0;i<10;i++){
		
		printf("\nDigite o numero do aluno (%d): ", i+1);
		scanf("%d", &aluno[i]);
	
			
		printf("Digite sua altura: ");
		scanf("%f", &altura[i]);
			
			if(i == 0 || altura[i] > maior_altura){
				
			     maior_altura = altura[i];
			     maior_aluno = aluno[i];
			}
			
		}
	
	printf("\nNumero do maior aluno e: %d \n", maior_aluno);
	printf("\nMaior altura e: %.2f ", maior_altura);
	
	return 0;
}
