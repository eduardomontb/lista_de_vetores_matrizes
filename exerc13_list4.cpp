/*13. Leia dois vetores de inteiros X e Y, cada um com 5 elementos (assuma que o usuário não
informa elementos repetidos). Calcule e mostre os vetores resultantes em cada caso abaixo:
   *Soma entre X e Y: soma de cada elemento de X com o elemento da mesma posição em Y.
   *Produto entre X e Y: multiplicação de cada elemento de X com o elemento da mesma posição em Y.
   *Diferença entre X e Y: todos os elementos de X que não existam em Y.
   *Interseção entre X e Y: apenas os elementos que aparecem nos dois vetores.
   *União entre X e Y: todos os elementos de X, e todos os elementos de Y que não estão em X.*/

#include<stdio.h>

void soma(int vet1[], int vet2[], int result[], int TAM){
 
  for(int i=0; i<TAM; i++){
  	
  	result[i] = vet1[i] + vet2[i];
  	
  	printf("%d\n", result[i]);
   }
   
   printf("\n");
}

void produto(int vet1[], int vet2[], int result[], int TAM){
 
  for(int i=0; i<TAM; i++){
  	
  	result[i] = vet1[i] * vet2[i];
  	
  	printf("%d\n", result[i]);
   }
   
   printf("\n");
}

void diferenca(int vet1[], int vet2[], int result[], int TAM){
 
 int cont = 0;
 
  for(int i=0; i<TAM; i++){
  	 int repetido = 0;
  	for(int j=0; j<TAM; j++){
  		if(vet1[i] == vet2[j]){
  			
  			repetido = 1;
  			break;
		  }
		  
	  }
  
      if(repetido != 1){    //se nao achei repetido 
      	result[cont] = vet1[i];
      	cont++;
	  }
   }
   
   for(int k=0; k<cont; k++){
   	
   	printf("%d\n", result[k]);
   }
   
   printf("\n");
}

void intersecao(int vet1[], int vet2[], int result[], int TAM){
	
  int cont = 0;
 
  for(int i=0; i<TAM; i++){
  	 int repetido = 0;
  	for(int j=0; j<TAM; j++){
  		if(vet1[i] == vet2[j]){
  			
  			repetido = 1;
  			break;
		  }
		  
	  }
  
      if(repetido != 0){   //se ele achou repetido 
      	result[cont] = vet1[i];
      	cont++;
	  }
   }
	for(int k=0; k<cont; k++){
   	
   	printf("%d\n", result[k]);
   }
   
   printf("\n");
}

void uniao(int vet1[], int vet2[], int uniao[], int TAM){
	
	int cont = 5;
	
	for(int i=0;i<TAM;i++){
	   
	   uniao[i] = vet1[i];
	   }
	   
	    for(int j=0;j<TAM;j++){
	    	int repetido = 0;
	   	  for(int k=0;k<TAM;k++){
	   	  	if(uniao[j] == vet2[k]){
	   	  		
				repetido = 1;
	   	  		break;
				 }
			 }
	   	
	   	if(repetido != 1){
	   		
	   		uniao[cont] = vet2[j];
	   		cont++;
		   }
	   }
		
		for(int l=0;l<cont;l++){
			
			printf("%d\n", uniao[l]);
		}
		
		printf("\n");
	}
	


int main(){
	
	int cont;
	int TAM = 5;
	int vet1[TAM], vet2[TAM], result[TAM];
	
	printf("\nPreencha os vetor A\n");
	for(int i=0;i<TAM;i++){
		
		printf("Vetor A (posicao: %d): ", i+1);
		scanf("%d", &vet1[i]);
	}
	
	printf("\nPreencha os vetor B\n");
	for(int j=0;j<TAM;j++){
		
		printf("Vetor B (posicao: %d): ", j+1);
		scanf("%d", &vet2[j]);	
	}
	
	printf("\n\n-- SOMA --");
	puts("\n");
	soma(vet1, vet2, result, TAM);
	
	
	printf("\n\n-- PRODUTO --");
	puts("\n");
	produto(vet1, vet2, result, TAM);
	
	
	printf("\n\n-- DIFERENCA --");
	puts("\n");
	diferenca(vet1, vet2, result, TAM);
	
	printf("\n\n-- INTERSECAO --");
	puts("\n");
	intersecao(vet1, vet2, result, TAM);
	
	printf("\n\n-- UNIAO --");
	puts("\n");
	uniao(vet1, vet2, result, TAM);
			
	return 0;
}
