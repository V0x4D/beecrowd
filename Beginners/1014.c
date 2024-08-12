#include <stdio.h>

int main(){
	int Distancia;
	float CombustivelGasto, ConsumoMedio;

	scanf("%i", &Distancia);
	
	scanf("%f", &CombustivelGasto);
	
	ConsumoMedio = Distancia / CombustivelGasto;
	
	printf("%.3f km/l\n", ConsumoMedio);
	
	return 0;
}
