#include <stdio.h>

int main(){
	float a, b, c, media, soma, res;
	
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
		
	a = a * 2;
	b = b * 3;
	c = c * 5;
	
	soma = a + b + c;
	
	media = soma / (2 + 3 + 5);
	
	printf("MEDIA = %.1f\n", media);
	
	return 0;
}
