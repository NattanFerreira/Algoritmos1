#include <stdio.h>
int main(){
    int n, calc;
    calc = 0;
    printf("Digite o N:\n");
    scanf("%d", &n);
    printf("A soma dos numeros é:");
    for (int i = 1; i <= n; i++)
    {
        calc += i;
    }
    printf("%d ", calc);
    return 0;
}