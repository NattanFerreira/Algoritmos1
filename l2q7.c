#include<stdio.h>
int main(){
    int n;
    int f = 1;
    printf("Digite o numero:\n");
    scanf("%d",&n);
    for (int i = n; i == 1; i--)
    {
        f = f*i;
    }
    printf("%d! é igual a:%d\n", n, f);
    return 0;
}