#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

void main(){
	
	int idade, pessoas=0, menor=1000, maior=0,total=0;
	float media;
	setlocale(LC_ALL,"");
	printf("Esse programa armazena varias idades e calcula o número de pessoas, a idade média, a menor idade e a maior idade.");
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
	
	printf("\nO número de pessoas que armazenaram a idade é de: %i",pessoas);
	printf("\nA idade média das pessoas é de: %.2f", media);
	printf("\nA menor idade é: %i", menor);
	printf("\nA maior idade é: %i", maior);
	
	getch();
	
	
	
}
