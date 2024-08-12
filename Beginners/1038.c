#include <stdio.h>

int main(){
	int x, y;
	float Total;
	
	scanf("%i", &x);
	scanf("%i", &y);
	
	switch(x)
	{
		case 1:
			Total = y * 4;
			printf("Total: R$ %.2f\n", Total);
		break;
		
		case 2:
			Total = y * 4.5;
			printf("Total: R$ %.2f\n", Total);
		break;
		
		case 3:
			Total = y * 5;
			printf("Total: R$ %.2f\n", Total);
		break;
		
		case 4:
			Total = y * 2;
			printf("Total: R$ %.2f\n", Total);
		break;
		
		case 5:
			Total = y * 1.5;
			printf("Total: R$ %.2f\n", Total);
		break;
	}
	
	return 0;
}
