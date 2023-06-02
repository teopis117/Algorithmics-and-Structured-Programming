#include <stdio.h>
#include <math.h>

// Funcion para calcular el discriminante
double calcula_discriminante(double a, double b, double c) {
    return b * b - 4.0 * a * c;
}

// Funcion para calcular las raices
void calcula_raices(double a, double b, double c, double* r1, double* r2) {
    double discriminante = calcula_discriminante(a, b, c);
    if(discriminante < 0) {
        printf("No hay raices reales.\n");
        *r1 = 0;
        *r2 = 0;
    } else {
        *r1 = (-b + sqrt(discriminante)) / (2.0 * a);
        *r2 = (-b - sqrt(discriminante)) / (2.0 * a);
    }
}

int main() {
    double a, b, c;
    double r1, r2;

    printf("Ingrese los coeficientes a, b y c de la ecuacion cuadratica: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    calcula_raices(a, b, c, &r1, &r2);

    if (r1 != 0 || r2 != 0) {
        printf("Las raices son: %lf, %lf\n", r1, r2);
    }
    
    return 0;
}
