#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

void main(){
	
	int idade, pessoas=0, menor=1000, maior=0,total=0;
	float media;
	setlocale(LC_ALL,"");
	printf("Esse programa armazena varias idades e calcula o n�mero de pessoas, a idade m�dia, a menor idade e a maior idade.");
	printf("\nDigite 0 para encerrar");
	printf("\nDigite a idade:");
	scanf("%i",&idade);

	
	do{
	
	pessoas++;
	if(idade>maior){
		maior=idade;
	}
	if (idade!=0 && idade<menor){
	
		menor=idade;
	
	}	
	total=total+idade;
	
	printf("\nDigite a idade:");
	scanf("%i",&idade);
	

	
		
	} while(idade!=0);
	
	media=total/pessoas;
	
	printf("\nO n�mero de pessoas que armazenaram a idade � de: %i",pessoas);
	printf("\nA idade m�dia das pessoas � de: %.2f", media);
	printf("\nA menor idade �: %i", menor);
	printf("\nA maior idade �: %i", maior);
	
	getch();
	
	
	
}
