#include <stdio.h>

int main() {
    FILE *fp = fopen("numeros.txt", "w");
    if(fp == NULL) {
        printf("No se pudo abrir el archivo para escritura.\n");
        return 1;
    }
    
    for(int i = 1; i <= 10; i++) {
        fprintf(fp, "%d\n", i);
    }
    
    fclose(fp);
    
    fp = fopen("numeros.txt", "r");
    if(fp == NULL) {
        printf("No se pudo abrir el archivo para lectura.\n");
        return 1;
    }
    
    int num;
    while(fscanf(fp, "%d", &num) == 1) {
        printf("Leido del archivo: %d\n", num);
    }
    
    fclose(fp);
    
    return 0;
}
