#include <stdio.h>
int main()
{
    int i, n;
    n = 5;
    i = 1;
    while (i <= 10)
    {
        printf("%d * %d = %2d\n", n, i, n * i);
        i = i + 1;
    }
}
