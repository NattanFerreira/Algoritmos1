#include <stdio.h>
int main(){
    int n;
    int sequencia;
    int soma = 0;
    printf("Digite a sequencia:\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &sequencia);
        if (sequencia%2 ==0)
        {
            soma += sequencia;
        }
    }
    printf("A soma entre os numeros pares digitados é:%d\n", soma);
    return 0;
}