#include <stdio.h>
int main(){
    int n, imp;
    imp = 1;
    printf("Digite o N:\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", imp);
        imp += 2;
    }
    return 0;
}