#include <stdio.h>
#include <math.h>

// Definición de las subrutinas
double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplica(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division por cero.\n");
        return 0;
    }
}

double seno(double a) {
    return sin(a);
}

double coseno(double a) {
    return cos(a);
}

double tangente(double a) {
    return tan(a);
}

int main() {
    double num1, num2;
    int opcion;

    printf("Ingrese dos numeros: ");
    scanf("%lf %lf", &num1, &num2);

    printf("\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Seno(num1)\n6. Coseno(num1)\n7. Tangente(num1)\n");
    printf("Elige una operacion: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Resultado: %lf\n", suma(num1, num2));
            break;
        case 2:
            printf("Resultado: %lf\n", resta(num1, num2));
            break;
        case 3:
            printf("Resultado: %lf\n", multiplica(num1, num2));
            break;
        case 4:
            printf("Resultado: %lf\n", divide(num1, num2));
            break;
        case 5:
            printf("Resultado: %lf\n", seno(num1));
            break;
        case 6:
            printf("Resultado: %lf\n", coseno(num1));
            break;
        case 7:
            printf("Resultado: %lf\n", tangente(num1));
            break;
        default:
            printf("Opcion no valida.\n");
    }

    return 0;
}
