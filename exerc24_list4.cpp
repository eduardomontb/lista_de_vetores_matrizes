//Fa�a um programa que leia dois n�meros n e m e:
  //Crie e leia um vetor de inteiros de n posi��es;
  //Crie e leia um vetor de inteiros de m posi��es;
  //Crie e construa um vetor de inteiros que seja a interse��o entre os dois vetores
//anteriores, ou seja, que cont�m apenas os n�meros que est�o em ambos os vetores. N�o deve conter n�meros repetidos.
//Na sua fun��o main(), imprima os tr�s vetores criados.


#include<stdio.h>

int main(){
	
	int n, m;
	
	
	printf("Digite o tamnho do vetor N: ");
	scanf("%d", &n);
	
	int vet1[n];
	
	printf("Digite o tamnho do vetor M: ");
	scanf("%d", &m);
	
	int vet2[m];
	
	
	printf("\nPreencha os vetor N\n");
	for(int i=0;i<n;i++){
		
		printf("digite um numero (vetor N) (posicao: %d): ", i+1);
		scanf("%d", &vet1[i]);
	}
	
	printf("\nPreencha os vetor M\n");
	for(int j=0;j<m;j++){
		
		printf("digite um numero (vetor M) (posicao: %d): ", j+1);
		scanf("%d", &vet2[j]);	
	}
	
    int menor;
    if (n < m) {
    menor = n;    
    }  
	 else {
    menor = m;     
    }

    int inter[menor];
    int t=0;
	
	
	for(int k=0;k<n;k++){
		for(int l=0;l<m;l++){
			
			if(vet1[k] == vet2[l]){
				
			    printf("%d ", vet1[k]);
			}
		}
	}
	
	return 0;
}
