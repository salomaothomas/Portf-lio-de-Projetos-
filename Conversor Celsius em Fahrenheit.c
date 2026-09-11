#include <stdio.h>

int main(){
    float C, F; 
    printf("Digite a temp em celsius: ");
    scanf("%F", &C);
    F = 9.0 / 5 * C + 32; 
    printf("%.1f graus Celcius corresponde a %.1f graus Fahrenheit", C,F);
    
    return 0;
}