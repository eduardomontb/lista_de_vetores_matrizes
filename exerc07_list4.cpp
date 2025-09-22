//7. Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. Crie um novo array C calculando C = A - B. 
//Mostre na tela os dados do array C.

#include <stdio.h>

int main(){
   
   int vet1[4];
   int vet2[4];
   int sub[4];
   
   printf("++Preencha o vetor A++\n");
   for(int i=0; i<4; i++){
   	
   	printf("digite um numero: ");
   	scanf("%d", &vet1[i]);
   }
   
   printf("++Preencha o vetor B++\n");
   for(int j=0; j<4; j++){
   	
   	printf("digite um numero: ");
   	scanf("%d", &vet2[j]);
   }
   
   for(int k=0; k<4; k++){
   	
   	sub[k] = vet1[k] - vet2[k];
   }
   
   printf("\n\nvetor resultante da subtracao entre A e B: ");
   for(int l=0; l<4; l++){

   	printf("%d ", sub[l]);
   }
   
   return 0;
}

