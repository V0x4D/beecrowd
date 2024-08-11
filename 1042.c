#include <stdio.h>

int main(){
	int x, y, z, Troca, xa, ya, za;
	
	scanf("%i", &x);
	scanf("%i", &y);
	scanf("%i", &z);
	
	xa = x;
	ya = y;
	za = z;
	
	if(x > y)
	{
		Troca = x;
		x = y;
		y = Troca;
	}
	if(x > z)
	{
		Troca = x;
		x = z;
		z = Troca;
	}
	if(y > z)
	{
		Troca = y;
		y = z;
		z = Troca;
	}
	
	printf("%i\n%i\n%i\n", x, y, z);
	printf("\n%i\n%i\n%i\n", xa, ya, za);
	
	return 0;
}
