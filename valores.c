#include <stdio.h>
int main()
{
    int n;
    int contpares;
    contpares = 2;
    scanf("%d", &n);
    while (contpares <= n)
    {
        if (n % 2 == 0 && n > 0)
        {
            printf("%2d*%d=%2d\n", contpares, contpares, contpares * contpares);
        }
        contpares = contpares + 2;
    }
}