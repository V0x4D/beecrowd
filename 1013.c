#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a, b, c, MaiorAB, MaiorABC;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	MaiorAB = (a + b + abs(a - b)) / 2;
	MaiorABC = (MaiorAB + c + abs(MaiorAB - c)) / 2;
	
	printf("%i eh o maior\n", MaiorABC);
	
	return 0;
}
