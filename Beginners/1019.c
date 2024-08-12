#include <stdio.h>

int main(){
	int Segundos, h, m, s, Resto;
	
	scanf("%d", &Segundos);
	
	h = Segundos / 3600;
	Resto = Segundos % 3600;
	m = Resto / 60;
	s = Resto % 60;
	
	printf("%d:%d:%d\n", h, m, s);
	
	return 0;
}
