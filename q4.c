#include <stdio.h>
int main()
{
    char letra;
    letra = getchar();
    switch (letra)
    {
    case 'a': 
    case 'A':
    printf("\nVogal");
        break;
    case 'e': 
    case 'E':
    printf("\nVogal");
        break;
    case 'i':
    case 'I':
    printf("\nVogal");
        break;
    case 'o': 
    case 'O':
    printf("\nVogal");
        break;
    case 'u':
    case 'U':
    printf("\nVogal");
        break;
    default:
    printf("\nConsoante");
        break;
    }
}