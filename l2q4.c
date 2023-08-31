#include <stdio.h>
#include <math.h>
int main(){
    int x,n,result;
    printf("Digite o valor de X e N respectivamente: \n");
    scanf("%d %d", &x, &n);
    if (n>0)
    {
        result = pow(x,n);
        printf("O Valor de %d elevado a %d é:%d\n", x, n, result);
    }
    return 0;
}