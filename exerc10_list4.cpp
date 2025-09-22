//Ler uma sequência de nomeros reais e determinar o maior elemento desta sequência. A sequência termina quando for digitado o nomero zero.

#include <stdio.h>

int main(){
	
	float n, maior;
	
	printf("digite um numero: ");
	scanf("%f", &n);
	
	while(n!=0){
		
		if(maior==0){
			maior = n;
		}else if(n>maior){
			maior=n;
		}
	
		printf("digite um numero: ");
	    scanf("%f", &n);
				
	}
	
	printf("o maior numero da sequencia e: %.2f ", maior);
	
	return 0;
}
