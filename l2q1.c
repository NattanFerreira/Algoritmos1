#include <stdio.h>
int main(){
    int number, i;
    printf("Digite a quantidade de numeros:\n");
    scanf("%d", &number);
    printf("Os quadrados são:\n");
    for (i = 0; i <= number; i++)
    {
        printf("%d x %d = %d\n", i, i, i*i );
    }
    
return 0;
}