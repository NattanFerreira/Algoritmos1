#include <stdio.h>
int main(){
    int i;
    int count;
    scanf("%d",&count);
    for (i = 1; i <= count; i = i+2)
    {
        if (i>1)
        {
            printf("%d\n",i);
        }
    }
}