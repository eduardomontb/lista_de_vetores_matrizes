//Fa�a um programa que leia um vetor de 8 posi��es e em seguida leia tamb�m dois valores X e Y quaisquer correspondentes a duas posi��es no vetor. 
//Ao final seu programa dever� escrever a soma dos valores encontrados nas respectivas posi��es X e Y.

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
