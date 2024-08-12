#include <stdio.h>

int main(){
	int Notas, Saque;
	
	//printf("Digite a quantia a ser liberada: ");
	scanf("%i", &Saque);
	
	printf("%i\n", Saque);
	
	Notas = Saque / 100;
	printf("%i nota(s) de R$ 100,00\n", Notas);
	
	Saque = Saque % 100;
	Notas = Saque / 50; 
	printf("%i nota(s) de R$ 50,00\n", Notas);
	
	Saque = Saque % 50;
	Notas = Saque / 20;
	printf("%i nota(s) de R$ 20,00\n", Notas);
	
	Saque = Saque % 20;
	Notas = Saque / 10;
	printf("%i nota(s) de R$ 10,00\n", Notas);
	
	Saque = Saque % 10;
	Notas = Saque / 5;
	printf("%i nota(s) de R$ 5,00\n", Notas);
	
	Saque = Saque % 5;
	Notas = Saque / 2;
	printf("%i nota(s) de R$ 2,00\n", Notas);
	
	Saque = Saque % 2;
	Notas = Saque / 1;
	printf("%i nota(s) de R$ 1,00\n", Notas);	
	
	return 0; 
}
