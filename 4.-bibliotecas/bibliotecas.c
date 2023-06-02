#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    
    printf("Ingrese una cadena de texto: ");
    fgets(texto, sizeof(texto), stdin);
    
    printf("La longitud de la cadena es: %lu\n", strlen(texto) - 1);
    printf("La cadena en mayusculas es: ");
    for(int i = 0; texto[i]; i++) {
        putchar(toupper(texto[i]));
    }
    
    return 0;
}
