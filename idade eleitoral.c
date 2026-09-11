#include <stdio.h>

int main()
{
    int idade;
    
    printf("digite sua idade: ");
    scanf("%d", &idade);
    if (idade <=0){
        printf("idade inválida");
    }
    else{ 
    
    
    
    if (idade <16) {
        printf("não votante");
    } else if(idade >=18 && idade <=65) {
        printf("eleitor obrigátorio");
    } else {
        printf("eleitor facultativo");
    }}
    return 0;
}
