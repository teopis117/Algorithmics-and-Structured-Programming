#include <stdio.h>

double suma(double a, double b) {
    return a + b;
}

void test_suma() {
    if(suma(2, 2) != 4) {
        printf("Error: 2 + 2 debe ser igual a 4.\n");
    }
    
    if(suma(-1, 1) != 0) {
        printf("Error: -1 + 1 debe ser igual a 0.\n");
    }
    
    if(suma(5.5, 2.5) != 8) {
        printf("Error: 5.5 + 2.5 debe ser igual a 8.\n");
    }
    
    printf("Pruebas finalizadas.\n");
}

int main() {
    test_suma();
    return 0;
}
