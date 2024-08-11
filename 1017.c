#include <stdio.h>

int main(){
	int TempoGasto, VelocidadeMedia;
	double Distancia, CombustivelGasto;
	
	scanf("%i", &TempoGasto);
	scanf("%i", &VelocidadeMedia);
	
	Distancia = TempoGasto * VelocidadeMedia;
	CombustivelGasto = Distancia / 12;
	
	printf("%.3lf\n", CombustivelGasto);
		
	return 0;
}
