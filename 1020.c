#include <stdio.h>

int main(){
	int Idade, Dia, Mes, Ano, Resto;
	
	scanf("%i", &Idade);
	
	Ano = Idade / 365;
	Resto = Idade % 365;
	Mes = Resto / 30;
	Dia = Resto % 30;
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", Ano, Mes, Dia);
	
	return 0;
}
