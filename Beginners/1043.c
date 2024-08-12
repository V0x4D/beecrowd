#include <stdio.h>

int main(){
	float A, B, C, Area, Perimetro;
	
	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);
	
	Area = (A + B) * C / 2;
	Perimetro = A + B + C;
	
	if((A < (B + C)&&(B < (A + C))&&(C < (A + B))))
	{
		printf("Perimetro = %.1f\n", Perimetro);
	}
	else
	{
		printf("Area = %.1f\n", Area);
	}
	
	return 0;
}
