//Fa�a um programa para ler 10 n�meros DIFERENTES a serem armazenados em um vetor.Os dados dever�o ser armazenados no vetor na ordem que forem sendo lidos, sendo 
//que caso o usu�rio digite um n�mero que j� foi digitado anteriormente, o programa dever� pedir para ele digitar outro n�mero. Note que cada valor digitado 
//pelo usu�rio deve ser pesquisado o vetor, verificando se ele existe entre os n�meros que j� foram fornecidos. Exibir na tela o vetor final que foi digitado.

#include <stdio.h>

int main(){
	
	int vet[10];
	
	
   	for(int i=0;i<10;i++){
   	    
		printf("digite um numero (%d): ", i+1);
        scanf("%d", &vet[i]);
      

     for(int j=0;j<i;j++) {
	
        if(vet[i] == vet[j]){
         printf("\nNumero digitado j� se encontra no vetor!!\n");
    	 printf("digite outro numero: ");
    	 scanf("%d", &vet[i]);
    	 j=-1;
		}
      
	 }
	
	
  }
   for(int i=0;i<10;i++){
	
	printf("%d ", vet[i]);
 }
 
 return 0;
}
