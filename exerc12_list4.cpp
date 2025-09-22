//Leia 10 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2. Copieos valores ímpares de v para v1, e os valores pares de v para v2.
//Note que cada um dos vetores v1 e v2 têm no máximo 10 elementos, mas nem todos os elementos são utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.

#include <stdio.h>

int main(){
	
	int vet[10];
	int par[10], impar[10];
	int contpar = 0, contimpar = 0;
	
	printf("++Preencha o vetor ++\n");
    for(int i=0; i<10; i++){
   	
   	printf("digite um numero (%d): ", i+1);
   	scanf("%d", &vet[i]);
   	
   	
   	if(vet[i] % 2 == 0){
   		
   	    par[contpar] = vet[i];
		contpar++;    
	   }else{
	   	
	   	impar[contimpar] = vet[i];
	   	contimpar++;
	   }
   }
   
   printf("\nVetor principal: ");
   for(int j=0;j<10;j++){
   	
	   printf("%d ", vet[j]);	
   }
	
	printf("\nVetor com numeros pares: ");
	for(int k=0;k<contpar;k++){
		
		printf("%d ", par[k]);
	}
	
	printf("\nVetor com numeros impares: ");
	for(int l=0;l<contimpar;l++){
		
		printf("%d ", impar[l]);
	}
	
	return 0;
}
