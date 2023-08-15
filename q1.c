#include <stdio.h>
int main(){
    int f,c;
    printf("Digite a temperatura F:");
    scanf("%d",&f);
    c = 5 * ((f-32) / 9);
    printf("A temperatura em C é:%d\n", c);
}