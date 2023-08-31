#include <stdio.h>
int main(){
    int valor, maior, posicao;
    //maior = 0;
    for (int i = 1; i <= 5; i++)
    {
        printf("Digite um valor:\n");
        scanf("%d", &valor);
        if ( valor >= maior)
        {
            maior = valor;
            posicao = i;
        }
    }
    printf("Maior valor é:%d\nPosição é:%d",maior,posicao);

}