#include <stdio.h>

int main(){
	float Numero;
	
	scanf("%f", &Numero);
	
	if((Numero == 0)||(Numero == 25))
	{
		printf("Intervalo [0,25]\n");
	}
	else
	{
		if((Numero > 0)&&(Numero <= 25))
		{
			printf("Intervalo (0,25]\n");
		}
		else
		{
			if((Numero > 25)&&(Numero <= 50))
			{
				printf("Intervalo (25,50]\n");
			}
			else
			{
				if((Numero == 25)||(Numero == 50))
				{
					printf("Intervalo [25,50]\n");
				}
				else
				{
					if((Numero == 50)||(Numero == 75))
					{
						printf("Intervalo [50,75]\n");
					}
					else
					{
						if((Numero > 50)&&(Numero <= 75))
						{
							printf("Intervalo (50,75]\n");
						}
						else
						{
							if((Numero > 75)&&(Numero <= 100))
							{
								printf("Intervalo (75,100]\n");
							}
							else
							{
								if((Numero == 75)||(Numero == 100))
								{
									printf("Intervalo [75,100]\n");
								}
								else
								{
									if((Numero < 0)||(Numero > 100))
									{
										printf("Fora de intervalo\n");
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	return 0;
}
