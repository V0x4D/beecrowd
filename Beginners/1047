#include <stdio.h>

int main()
{
    int startHour, endHour, startMinute, endMinute;
    
    printf("Hora de inicio: ")
    scanf("%i", &startHour);
    
    printf("Minuto de inicio: ")
    scanf("%i", &startMinute);
    
    printf("Hora de termino: ")
    scanf("%i", &endHour);
    
    printf("Minuto de termino: ")
    scanf("%i", &endMinute);
    
    int startTotalMinutes = startHour * 60 + startMinute;
    int endTotalMinutes = endHour * 60 + endMinute;
    
    if(endTotalMinutes <= startTotalMinutes)
    {
        endTotalMinutes += 24 * 60;
    }
    
    int gameDuration = endTotalMinutes - startTotalMinutes;
    int gameHour = gameDuration / 60;
    int gameMinute = gameDuration % 60;
    
    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", gameHour, gameMinute);
}
