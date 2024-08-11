#include <stdio.h>
#include <math.h>

int main(){
	float Quantidade;
	int Dinheiro;
	
	scanf("%f", &Quantidade);
	Quantidade = Quantidade + 0.001;
	
	printf("NOTAS:");
	
	Dinheiro = Quantidade / 100;
	printf("\n%d nota(s) de R$ 100.00\n", Dinheiro);
	
	Quantidade = fmod(Quantidade, 100);
	Dinheiro = Quantidade / 50;
	printf("%d nota(s) de R$ 50.00\n", Dinheiro);
	
	Quantidade = fmod(Quantidade, 50);
	Dinheiro = Quantidade / 20;
	printf("%d nota(s) de R$ 20.00\n", Dinheiro);
	
	Quantidade = fmod(Quantidade, 20);
	Dinheiro = Quantidade / 10;
	printf("%d nota(s) de R$ 10.00\n", Dinheiro);
	
	Quantidade = fmod(Quantidade, 10);
	Dinheiro = Quantidade / 5;
	printf("%d nota(s) de R$ 5.00\n", Dinheiro);
	
	Quantidade = fmod(Quantidade, 5);
	Dinheiro = Quantidade / 2;
	printf("%d nota(s) de R$ 2.00\n", Dinheiro);
	
	printf("MOEDAS:");
	
	Quantidade = fmod(Quantidade, 2);
	Dinheiro = Quantidade / 1;
	printf("\n%d moeda(s) de R$ 1.00\n", Dinheiro);
	
	Quantidade = fmod(Quantidade, 1);
	Dinheiro = Quantidade / 0.50;
	printf("%d moeda(s) de R$ 0.50\n", Dinheiro);
	
	Quantidade = fmod(Quantidade, 0.50);
	Dinheiro = Quantidade / 0.25;
	printf("%d moeda(s) de R$ 0.25\n", Dinheiro);
	
	Quantidade = fmod(Quantidade, 0.25);
	Dinheiro = Quantidade / 0.10;
	printf("%d moeda(s) de R$ 0.10\n", Dinheiro);
	
	Quantidade = fmod(Quantidade, 0.10);
	Dinheiro = Quantidade / 0.05;
	printf("%d moeda(s) de R$ 0.05\n", Dinheiro);
	
	Quantidade = fmod(Quantidade, 0.05);
	Dinheiro = Quantidade / 0.01;
	//Dinheiro = Dinheiro + 1;
	printf("%d moeda(s) de R$ 0.01\n", Dinheiro);
	
	return 0;
}
