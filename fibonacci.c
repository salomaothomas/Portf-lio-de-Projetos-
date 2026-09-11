#include <stdio.h>

int main()
{
    int cont=1, atual=1, prox=0, final, quantidade;
    printf("Quantos termos de Fibonacci vc deseja? ");
    scanf("%d", &quantidade);
    while(cont<=quantidade){
        final=atual+prox;
        atual=prox;
        prox=final;
        cont++;
        printf("%d\n",final);
    }

    return 0;
}
