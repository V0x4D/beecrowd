#include <stdio.h>
 
int main(){
    int CodProd1, NumUn1, CodProd2, NumUn2;
    float PrecoUn1, PrecoUn2, Calculo1, Calculo2, Total;
    
    scanf("%i", &CodProd1);
    scanf("%i", &NumUn1);
    scanf("%f", &PrecoUn1);
    scanf("%i", &CodProd2);
    scanf("%i", &NumUn2);
    scanf("%f", &PrecoUn2);
    
    Calculo1 = NumUn1 * PrecoUn1;
    Calculo2 = NumUn2 * PrecoUn2;
    Total = Calculo1 + Calculo2;
    
    printf("VALOR A PAGAR: R$ %.2f\n", Total);

    return 0;
}
