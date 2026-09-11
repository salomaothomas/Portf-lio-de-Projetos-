#include <stdio.h>

int main()
{
    float metros;
    printf("informe o valor em metros: ");
    scanf("%f", &metros); 
    
    float centimetros = metros * 100;
    float decimetros = metros * 10;
    float milimetros = metros * 1000;
    
    printf("%.2f metros equivalem a: \n", metros);
    printf("%.2f centimetros \n", centimetros);
    printf("%.2f decimetros \n", decimetros);
    printf("%.2f milimetros\n", milimetros);
    
    
    

    return 0;
}
