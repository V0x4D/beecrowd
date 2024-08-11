#include <stdio.h>
#include <math.h>

int main(){
    double pi = 3.14159;
    double r, a, x;
    
    scanf("%lf", &r);
    
    x = pow(r, 2);
    
    a = pi * x;
    
    printf("A=%.4lf\n", a);
    
    return 0;
}
