//Faça um programa que leia um vetor de 8 posições e em seguida leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. 
//Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.

#include<stdio.h>

int main(){
	
	int vet[8];
	
	printf("preencha o vetor\n");
	for(int i=0;i<8;i++){
		
		printf("elemento (%d): ", i+1);
		scanf("%d", &vet[i]);
	}

    int x, y;
    
    printf("\n++Soma++\n");
    printf("Digite a posicao dos dois valores: ");
    scanf("%d %d", &x,&y);
    
    int soma = vet[x-1] + vet[y-1];
    
    printf("soma: %d", soma);
    
    return 0;
}
