#include <stdio.h>

int main(){
	int A, B, Resto, Resto1;

	scanf("%i", &A);
	scanf("%i", &B);
	
	Resto = A % B;
	Resto1 = B % A;
	
	if((A > B)&&(Resto == 0)||(B > A)&&(Resto1 == 0))
	{
		printf("Sao Multiplos\n");
	}
	else
	{
		printf("Nao sao Multiplos\n");
	}
	
	return 0;
}
