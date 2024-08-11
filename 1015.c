#include <stdio.h>
#include <math.h>

int main(){
	double PontoX1, PontoY1, PontoX2, PontoY2, Distancia, Resultado1, Resultado2;
	
	scanf("%lf", &PontoX1);
	scanf("%lf", &PontoY1);
	scanf("%lf", &PontoX2);
	scanf("%lf", &PontoY2);
	
	Resultado1 = PontoX2 - PontoX1;
	Resultado2 = PontoY2 - PontoY1;
	
	Distancia = sqrt((Resultado1 * Resultado1) + (Resultado2 * Resultado2));
	
	printf("%.4lf\n", Distancia);	
	
	return 0;
}
