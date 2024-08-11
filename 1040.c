#include <stdio.h>

int main(){
	float N1, N2, N3, N4, Media, Exame;
	
	scanf("%f", &N1);
	scanf("%f", &N2);
	scanf("%f", &N3);
	scanf("%f", &N4);
	
	N1 = N1 * 2;
	N2 = N2 * 3;
	N3 = N3 * 4;
	N4 = N4 * 1;
	
	Media = (N1 + N2 + N3 + N4) / 10;
	
	printf("Media: %.1f\n", Media);
	
	if(Media >= 7)
	{
		printf("Aluno aprovado.\n");
	}
	else
	{
		if(Media < 5)
		{
			printf("Aluno reprovado.\n");
		}
		else
		{
			if((Media >= 5)&&(Media <= 6.9))
			{
				printf("Aluno em exame.\n");
				//printf("Nota do exame: ");
				scanf("%f", &Exame);
				printf("Nota do exame: %.1f\n", Exame);
				Exame = (Exame + Media) / 2;
				if(Exame >= 5)
				{
					printf("Aluno aprovado.\n");
					printf("Media final: %.1f\n", Exame);
				}
				else
				{
					printf("Aluno reprovado.\n");
					printf("Media final: %.1f\n", Exame);
				}
			}
		}
	}
	
	return 0;
}
