#include <stdio.h>

int main() {
    int altura;
    
    printf("Ingrese la altura del triangulo: ");
    scanf("%d", &altura);
    
    for(int i = 1; i <= altura; i++) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
