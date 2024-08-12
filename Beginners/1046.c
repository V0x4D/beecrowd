#include <stdio.h>

int main(){
    
    int start, end, maximum, gameTime;
    
    scanf("%i", &start);
    scanf("%i", &end);
    
    maximum = 24;
    
    if(end > start){
        end = maximum - (end - start);
        gameTime = maximum - end;
    }
    else{
        if(start >= end){
            start = maximum - start;
            gameTime = start + end;
        }
    }
    
    printf("O JOGO DUROU %i HORA(S)\n", gameTime);
}
