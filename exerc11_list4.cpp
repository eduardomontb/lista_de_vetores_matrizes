//Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que são primos e suas respectivas posições no vetor.

#include<stdio.h>

int main(){
	
	int vet[10];
	
	
	printf("++Preencha o vetor ++\n");
    for(int i=0; i<10; i++){

   	printf("digite um numero: ");
   	scanf("%d", &vet[i]);
   }
   
   printf("\n");
   printf("numeros primos da sequencia: ");
   for(int j=0;j<10;j++){
   	int primo = 1;
   	
   	if(vet[j] <= 1){
   		primo = 0;
	   }else{
	   	  for(int k=2; k<=vet[j]/2;k++){
	   	  	if(vet[j] % k == 0){
	   	  		
	   	  		primo = 0;
	   	  		break;
			}
	   	  	
		  }
	   	
	   	
	    }
	    if(primo){
    	
    	printf("%d ", vet[j]);
	  }
	   
     }
   
   return 0;
  }
   
   

