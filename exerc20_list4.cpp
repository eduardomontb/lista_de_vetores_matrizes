/*Ler uma sequ�ncia de n�meros inteiros (com nos. positivos e negativos) do teclado, sequ�ncia esta que termina com o n�mero zero e armazene num vetor. 
Escrever o no. de elementos positivos e o no. de elementos negativos presentes na sequ�ncia.*/

#include<stdio.h>

int main(){
	
	int vet[1000];
	int cont = 0;
	int contpar = 0;
	int contimpar = 0;
	int n;
	
	while(1){
		
		printf("\nDigite numeros inteiros (0 encerra): ");
		scanf("%d", &n);
		 
		if(n == 0){
			
			break;
		} 


        vet[cont] = n;
        cont++;
        
        if(n % 2 == 0){
        	
			contpar++;
		}else {
		
		    contimpar++;
		}
	
	}
	
	printf("\nQuantidade de numeros pares na sequencia: %d", contpar);
	printf("\nQuantidade de numeros impares na sequencia: %d", contimpar);
	
	printf("\nSequencia digitada: ");
	for(int i=0;i<cont;i++){
		
		printf("%d ", vet[i]);
	}
	
	printf("\n");
	
	return 0;
}
