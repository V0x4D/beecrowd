#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c, Triangulo, Circulo, Trapezio, Quadrado, Retangulo, Potencia;
	double Pi = 3.14159;
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	Potencia = pow(c, 2);
	
	Triangulo = a * c / 2;
	Circulo = Pi * Potencia;
	Trapezio = ((a + b) * c) / 2;
	Quadrado = b * b;
	Retangulo = a * b;
	
	printf("TRIANGULO: %.3lf\n", Triangulo);
	printf("CIRCULO: %.3lf\n", Circulo);
	printf("TRAPEZIO: %.3lf\n", Trapezio);
	printf("QUADRADO: %.3lf\n", Quadrado);
	printf("RETANGULO: %.3lf\n", Retangulo);
	
	return 0;
}
