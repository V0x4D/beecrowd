#include <stdio.h>

int main(){
	float ValorHora, Salario;
	int NumHoras, NumFuncionario;
	
	scanf("%d", &NumFuncionario);
	
	scanf("%d", &NumHoras);
	
	scanf("%f", &ValorHora);
	
	Salario = NumHoras * ValorHora;
	
	printf("NUMBER = %d\n", NumFuncionario);
	printf("SALARY = U$ %.2f\n", Salario);
	
	return 0;
}
