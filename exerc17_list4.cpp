//Peça ao usuário para digitar dez valores numéricos e ordene por ordem crescente estes valores, guardando-os num vetor. 
//Ordene o valor assim que ele for digitado. Mostre ao final os valores em ordem.

#include <stdio.h>

int main(){
	
	int vet[5];
	int aux;
	
	printf("++Preencha o vetor ++\n");
    for(int i=0; i<5; i++){

   	printf("digite um numero (%d): ", i+1);
   	scanf("%f", &vet[i]);
   	aux = vet[i];
   	
	for(int j=0,j<i;j++){
	

   	if(aux > vet[i]){
   		
   		
	   }
     
	 }
    
	}
	
}
