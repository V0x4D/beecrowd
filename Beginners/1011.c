#include <stdio.h>
#include <math.h>

int main(){
	double Pi = 3.14159;
	double Raio, Volume, Potencia;
	
	//printf("Digite o raio: ");
	scanf("%lf", &Raio);
	
	Potencia = pow(Raio, 3);
	
	Volume = (4.0 / 3 * Pi) * Potencia;
	
	printf("VOLUME = %.3lf\n", Volume);
	
	return 0;
}
