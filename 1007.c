#include <stdio.h>

int main(){
	int a, b, c, d, res;
	
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	scanf("%i", &d);
	
	res = (a * b) - (c * d);
	
	printf("DIFERENCA = %i\n", res);
	
	return 0;
}
