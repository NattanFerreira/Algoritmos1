#include <stdio.h>
int main(){
    int a,b;
    float c;
    printf("Digite os dois inteiros:");
    scanf("%d%d", &a,&b);
    printf("Digite o real:");
    scanf("%f",&c);
    printf("o produto do dobro do primeiro com metade do segundo é:%d\n",(a*a)*(b/2));
    printf("a soma do triplo do primeiro com o terceiro é:%d\n",(a*3)+c);
    printf("o terceiro elevado ao cubo:%d\n", c*c*c);
}