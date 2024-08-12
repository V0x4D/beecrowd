#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c, Raiz, Potencia, Calculo, Calculo1, Calculo2, Calculo3;
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	Potencia = pow(b, 2);
	Calculo = Potencia  - (4 * a * c);
	Raiz = sqrt(Calculo);
	Calculo1 = (- b + Raiz) / (2 * a);
	Calculo2 = (- b - Raiz) / (2 * a);
	Calculo3 = 2 * a;
	
	if((Calculo < 0)||(Calculo3 == 0))
	{
		printf("Impossivel calcular\n");
	}
	else
	{
		printf("R1 = %.5lf\n", Calculo1);
		printf("R2 = %.5lf\n", Calculo2);
	}
	
	return 0;
}
