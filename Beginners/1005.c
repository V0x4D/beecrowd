#include <stdio.h>

int main(){
  
	float A, B, MEDIA;
	
	scanf("%f", &A);
	scanf("%f", &B);
	
	A = A * 3.5;
	B = B * 7.5;
	
	MEDIA = (A + B) / (3.5 + 7.5);
	
	printf("MEDIA = %.5lf\n", MEDIA);
	
	return 0;
  
}
