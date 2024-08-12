#include <stdio.h>

int main (){
    char nome;
    double TotalVendas, SalarioFixo, Comissao;
    
    scanf("%s", &nome);
    scanf("%lf", &SalarioFixo);
    scanf("%lf", &TotalVendas);
    
    Comissao = TotalVendas * 0.15;
    
    printf("TOTAL = R$ %.2lf\n", (Comissao + SalarioFixo));
    
    return 0;
}
