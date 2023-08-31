#include <stdio.h>
int main(){
    float n;
    float maior = 0;
    float menor = 100; 
    int control;
    do
    {
        printf("Adicionar nota? 1 para Sim e outra coisa para não\n");
        scanf("%d", &control);
        if (control == 1)
        {
            printf("Digite a nota:\n");
            scanf("%f", &n);
            if (n>=maior && n<=100)
            {
                maior = n;
            } if (n<menor)
            {
                menor = n;
            }
        }
    } while (control == 1);
    printf("A maior nota foi: %.2f\nA menor nota foi:%.2f\n", maior, menor);
    return 0;
}